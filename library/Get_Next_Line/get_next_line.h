/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kykim <kykim@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/24 13:08:32 by kykim             #+#    #+#             */
/*   Updated: 2019/01/31 19:26:36 by kykim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include "libft/libft.h"
# define BUFF_SIZE 320
# define BUFF_SIZE_IN 1

typedef struct		s_fd
{
	char			*content;
	int				fd;
	struct s_fd		*next;
}					t_fd;

int					get_next_line(const int fd, char **line);

#endif
