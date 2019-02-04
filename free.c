/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kykim <kykim@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/24 16:04:58 by kykim             #+#    #+#             */
/*   Updated: 2019/01/31 19:36:27 by kykim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "filler.h"

void	free_board(t_board *board)
{
	int i;

	i = 0;
	if (!board->data)
		return ;
	while (i < board->height)
	{
		free(board->data[i]);
		i++;
	}
	free(board->data);
}

void	free_map(t_info *info)
{
	int i;

	i = 0;
	while (i < info->board->height)
	{
		free(info->map[i]);
		i++;
	}
	free(info->map);
	info->map = NULL;
}

void	free_token(t_token *token)
{
	int i;

	i = 0;
	if (!token->data)
		return ;
	while (i < token->height)
	{
		free(token->data[i]);
		i++;
	}
	free(token->data);
}

void	free_list(t_score *start)
{
	t_score *tmp1;
	t_score *tmp2;

	tmp1 = start->next;
	while (tmp1)
	{
		tmp2 = tmp1;
		tmp1 = tmp1->next;
		free(tmp2);
	}
	start->next = NULL;
}

void	zero_map(t_info *info)
{
	int i;
	int j;

	i = 0;
	while (i < info->board->height)
	{
		j = 0;
		while (j < info->board->width)
		{
			info->map[i][j] = 0;
			j++;
		}
		i++;
	}
}
