/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kykim <kykim@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/04 10:53:54 by kykim             #+#    #+#             */
/*   Updated: 2019/01/31 19:47:12 by kykim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "filler.h"

void	set_player_num(t_info *info)
{
	char *line;

	get_next_line(0, &line);
	if (line && !ft_strncmp(line, "$$$ exec p", 10))
	{
		info->player_num = line[10] - '0';
		info->player_shape = info->player_num == 1 ? 'O' : 'X';
	}
	free(line);
}

void	update_board(t_board *board, char *line)
{
	int		i;
	char	*str;

	line = ft_strchr(line, ' ');
	board->height = ft_atoi(++line);
	line = ft_strchr(line, ' ');
	board->width = ft_atoi(line);
	free_board(board);
	board->data = malloc(sizeof(char *) * board->height);
	get_next_line(0, &str);
	free(str);
	i = 0;
	while (i < board->height)
	{
		get_next_line(0, &str);
		board->data[i] = ft_strdup(str + 4);
		free(str);
		i++;
	}
}

void	filler_loop(t_info *info)
{
	int		result;
	char	*line;
	t_point	best;

	while ((result = get_next_line(0, &line)) > 0)
	{
		if (!ft_strncmp(line, "Plateau ", 8))
		{
			update_board(info->board, line);
			create_map(info);
			mapping(info);
			edge_dots(info);
		}
		else if (!ft_strncmp(line, "Piece ", 6))
		{
			parse_token(info->token, line);
			make_list(info);
			best = min_score(info->start);
			ft_putnbr(best.y);
			ft_putchar(' ');
			ft_putnbr(best.x);
			ft_putchar('\n');
		}
		free(line);
	}
}

void	initializer(t_info *info)
{
	info->board = malloc(sizeof(t_board));
	info->board->data = NULL;
	info->token = malloc(sizeof(t_token));
	info->token->data = NULL;
	info->map = NULL;
	info->edgedots = NULL;
	info->start = malloc(sizeof(t_score));
	info->start->next = NULL;
}

int		main(void)
{
	t_info *info;

	info = malloc(sizeof(t_info));
	initializer(info);
	set_player_num(info);
	filler_loop(info);
	free(info->board);
	free(info->token);
	free(info->start);
	free(info);
	return (0);
}
