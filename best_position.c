/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   best_position.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kykim <kykim@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/31 14:34:42 by kykim             #+#    #+#             */
/*   Updated: 2019/01/31 19:40:48 by kykim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "filler.h"

void	add_link(int adj_i, int adj_j, t_info *info)
{
	t_score *node;

	node = malloc(sizeof(t_score));
	node->top_left.x = adj_j;
	node->top_left.y = adj_i;
	node->score = get_score(adj_i, adj_j, info);
	node->next = info->start->next;
	info->start->next = node;
}

void	add_cases(t_point edgedot, t_info *info)
{
	int i;
	int j;
	int adj_i;
	int adj_j;

	i = 0;
	while (i < info->token->height)
	{
		j = 0;
		while (j < info->token->width)
		{
			if (info->token->data[i][j] == '*')
			{
				adj_i = edgedot.y - i;
				adj_j = edgedot.x - j;
				if (check_token_box(adj_i, adj_j, info) &&
				check_only_one(adj_i, adj_j, info))
					add_link(adj_i, adj_j, info);
			}
			j++;
		}
		i++;
	}
}

void	make_list(t_info *info)
{
	int i;

	i = 0;
	free_list(info->start);
	while (i < info->edgedot_count)
	{
		add_cases(info->edgedots[i], info);
		i++;
	}
}

t_point	min_score(t_score *start)
{
	int		min;
	t_point	zero;
	t_score	*tmp;

	zero.x = 0;
	zero.y = 0;
	tmp = start->next;
	if (!tmp)
		return (zero);
	min = tmp->score;
	while (tmp)
	{
		if (tmp->score <= min)
			min = tmp->score;
		tmp = tmp->next;
	}
	tmp = start->next;
	while (tmp)
	{
		if (tmp->score == min)
			break ;
		tmp = tmp->next;
	}
	return (tmp->top_left);
}
