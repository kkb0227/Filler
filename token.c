/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   token.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kykim <kykim@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/07 12:25:06 by kykim             #+#    #+#             */
/*   Updated: 2019/01/31 19:41:27 by kykim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "filler.h"

void	count_shape_from_token(t_token *token)
{
	int i;
	int j;
	int count;

	i = 0;
	count = 0;
	while (i < token->height)
	{
		j = 0;
		while (j < token->width)
		{
			if (token->data[i][j] == '*')
				count++;
			j++;
		}
		i++;
	}
	token->point_count = count;
}

void	parse_token(t_token *token, char *line)
{
	char	*str;
	int		i;

	free_token(token);
	line = ft_strchr(line, ' ');
	token->height = ft_atoi(++line);
	line = ft_strchr(line, ' ');
	token->width = ft_atoi(line);
	token->data = malloc(sizeof(char *) * token->height);
	i = 0;
	while (i < token->height)
	{
		get_next_line(0, &str);
		token->data[i] = ft_strdup(str);
		free(str);
		i++;
	}
	count_shape_from_token(token);
}
