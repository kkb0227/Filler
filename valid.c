/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   valid.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kykim <kykim@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/05 21:35:21 by kykim             #+#    #+#             */
/*   Updated: 2019/01/31 19:42:30 by kykim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "filler.h"

int	check_only_one(int adj_i, int adj_j, t_info *info)
{
	int i;
	int j;
	int count;

	count = 0;
	i = 0;
	while (i < info->token->height)
	{
		j = 0;
		while (j < info->token->width)
		{
			if (info->token->data[i][j] == '*' &&
			(info->board->data[i + adj_i][j + adj_j] == info->player_shape ||
			info->board->data[i + adj_i][j + adj_j] == info->player_shape + 32))
				count++;
			j++;
		}
		i++;
	}
	if (count == 1)
		return (1);
	return (0);
}

int	check_token_box(int adj_i, int adj_j, t_info *info)
{
	int i;
	int j;

	i = 0;
	while (i < info->token->height)
	{
		j = 0;
		while (j < info->token->width)
		{
			if (!(i + adj_i >= 0 && i + adj_i < info->board->height &&
			j + adj_j >= 0 && j + adj_j < info->board->width))
				return (0);
			if (!(info->board->data[i + adj_i][j + adj_j] == '.' ||
			info->board->data[i + adj_i][j + adj_j] == info->player_shape ||
			info->board->data[i + adj_i][j + adj_j] == info->player_shape + 32))
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int	get_score(int adj_i, int adj_j, t_info *info)
{
	int i;
	int j;
	int total;

	i = 0;
	total = 0;
	while (i < info->token->height)
	{
		j = 0;
		while (j < info->token->width)
		{
			if (info->token->data[i][j] == '*')
				total += info->map[i + adj_i][j + adj_j];
			j++;
		}
		i++;
	}
	return (total);
}
