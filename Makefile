# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kykim <kykim@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/01/03 18:43:06 by kykim             #+#    #+#              #
#    Updated: 2019/01/04 11:12:33 by kykim            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = kykim.filler

CFILES = *.c

OFILES = *.o

CGFLAGS = -Wall -Werror -Wextra

LIBFT = library/ft_libft

GNL = library/Get_Next_Line

all: $(NAME)

$(NAME):
		make -C $(LIBFT)
		make -C $(GNL)
		gcc $(CGFLAGS) -c $(CFILES) -I.
		gcc $(OFILES) -L $(LIBFT) -lft -L $(GNL) -lgnl -o $(NAME)

clean:
	make -C $(LIBFT)/ clean
	make -C $(GNL)/ clean
	rm -f $(OFILES)

fclean: clean
		make -C $(LIBFT)/ fclean
		make -C $(GNL)/ fclean
		rm -f $(NAME)

re: fclean all

.PHONY: re all clean fclean