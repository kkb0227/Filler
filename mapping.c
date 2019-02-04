/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mapping.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kykim <kykim@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/05 20:38:47 by kykim             #+#    #+#             */
/*   Updated: 2019/01/31 19:46:13 by kykim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "filler.h"

void	mapping(t_info *info)
{
	int i;
	int j;
	int x;

	x = 2;
	while (empty_checker(info))
	{
		i = 0;
		while (i < info->board->height)
		{
			j = 0;
			while (j < info->board->width)
			{
				if (info->map[i][j] == x - 1)
					fill_map(info, i, j, x);
				j++;
			}
			i++;
		}
		x++;
	}
}

void	update_map(t_info *info)
{
	char	target;
	int		i;
	int		j;

	target = info->player_shape == 'O' ? 'X' : 'O';
	i = 0;
	while (i < info->board->height)
	{
		j = 0;
		while (j < info->board->width)
		{
			if (info->board->data[i][j] == target ||
			info->board->data[i][j] == target + 32)
				info->map[i][j] = 1;
			j++;
		}
		i++;
	}
}

void	create_map(t_info *info)
{
	int i;

	i = 0;
	if (info->map)
		free_map(info);
	info->map = malloc(sizeof(int *) * info->board->height);
	while (i < info->board->height)
	{
		info->map[i] = malloc(sizeof(int) * info->board->width);
		i++;
	}
	zero_map(info);
	update_map(info);
}

void	fill_map(t_info *info, int i, int j, int x)
{
	if (i >= 1 && j >= 1 && info->map[i - 1][j - 1] == 0)
		info->map[i - 1][j - 1] = x;
	if (i >= 1 && info->map[i - 1][j] == 0)
		info->map[i - 1][j] = x;
	if (i >= 1 && j + 1 < info->board->width && info->map[i - 1][j + 1] == 0)
		info->map[i - 1][j + 1] = x;
	if (j >= 1 && info->map[i][j - 1] == 0)
		info->map[i][j - 1] = x;
	if (j + 1 < info->board->width && info->map[i][j + 1] == 0)
		info->map[i][j + 1] = x;
	if (i + 1 < info->board->height && j > 1 && info->map[i + 1][j - 1] == 0)
		info->map[i + 1][j - 1] = x;
	if (i + 1 < info->board->height && info->map[i + 1][j] == 0)
		info->map[i + 1][j] = x;
	if (i + 1 < info->board->height && j + 1 < info->board->width &&
	info->map[i + 1][j + 1] == 0)
		info->map[i + 1][j + 1] = x;
}

int		empty_checker(t_info *info)
{
	int i;
	int j;

	i = 0;
	while (i < info->board->height)
	{
		j = 0;
		while (j < info->board->width)
		{
			if (info->map[i][j] == 0)
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}
