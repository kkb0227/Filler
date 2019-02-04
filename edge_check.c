/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   edge_check.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kykim <kykim@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/07 12:26:33 by kykim             #+#    #+#             */
/*   Updated: 2019/01/31 19:33:28 by kykim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "filler.h"

int		check_edge(t_info *info, int i, int j)
{
	int edge;

	edge = 0;
	if (i > 0 && info->board->data[i - 1][j] == '.')
		edge++;
	if (i < info->board->height - 1 && info->board->data[i + 1][j] == '.')
		edge++;
	if (j > 0 && info->board->data[i][j - 1] == '.')
		edge++;
	if (j < info->board->width - 1 && info->board->data[i][j + 1] == '.')
		edge++;
	return (edge);
}

void	count_edge_dots(t_info *info)
{
	int i;
	int j;
	int count;

	i = 0;
	j = 0;
	count = 0;
	while (i < info->board->height)
	{
		j = 0;
		while (j < info->board->width)
		{
			if ((info->board->data[i][j] == info->player_shape ||
			info->board->data[i][j] == info->player_shape + 32) &&
			check_edge(info, i, j))
				count++;
			j++;
		}
		i++;
	}
	info->edgedot_count = count;
}

void	add_dots(t_info *info)
{
	int x;
	int i;
	int j;

	x = 0;
	i = 0;
	while (i < info->board->height)
	{
		j = 0;
		while (j < info->board->width)
		{
			if ((info->board->data[i][j] == info->player_shape ||
			info->board->data[i][j] == info->player_shape + 32) &&
			check_edge(info, i, j))
			{
				info->edgedots[x].x = j;
				info->edgedots[x].y = i;
				x++;
			}
			j++;
		}
		i++;
	}
}

void	edge_dots(t_info *info)
{
	count_edge_dots(info);
	if (info->edgedots)
		free(info->edgedots);
	info->edgedots = malloc(sizeof(t_point) * info->edgedot_count);
	add_dots(info);
}
