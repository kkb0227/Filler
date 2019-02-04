/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   filler.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kykim <kykim@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/03 18:31:35 by kykim             #+#    #+#             */
/*   Updated: 2019/01/31 20:00:24 by kykim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILLER_H
# define FILLER_H

# include "library/ft_libft/libft.h"
# include "library/Get_Next_Line/get_next_line.h"
# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>

typedef struct	s_point
{
	int x;
	int y;
}				t_point;

typedef struct	s_score
{
	t_point			top_left;
	int				score;
	struct s_score	*next;
}				t_score;

typedef struct	s_token
{
	int			height;
	int			width;
	char		**data;
	int			point_count;
}				t_token;

typedef struct	s_board
{
	int		height;
	int		width;
	char	**data;
}				t_board;

typedef struct	s_info
{
	int			player_num;
	char		player_shape;
	t_board		*board;
	int			**map;
	int			edgedot_count;
	t_point		*edgedots;
	t_token		*token;
	t_score		*start;
}				t_info;

t_point			min_score(t_score *start);
void			add_link(int adj_i, int adj_j, t_info *info);
void			add_cases(t_point edgedot, t_info *info);
void			make_list(t_info *info);
int				check_edge(t_info *info, int i, int j);
void			count_edge_dots(t_info *info);
void			add_dots(t_info *info);
void			edge_dots(t_info *info);
void			free_board(t_board *board);
void			free_map(t_info *info);
void			free_token(t_token *token);
void			free_list(t_score *start);
void			zero_map(t_info *info);
void			create_map(t_info *info);
void			update_map(t_info *info);
void			fill_map(t_info *info, int i, int j, int x);
int				empty_checker(t_info *info);
void			mapping(t_info *info);
void			count_shape_from_token(t_token *token);
void			parse_token(t_token *token, char *line);
int				check_only_one(int adj_i, int adj_j, t_info *info);
int				check_token_box(int adj_i, int adj_j, t_info *info);
int				get_score(int adj_i, int adj_j, t_info *info);
void			set_player_num(t_info *info);
void			update_board(t_board *board, char *line);
void			filler_loop(t_info *info);
void			initializer(t_info *info);
#endif
