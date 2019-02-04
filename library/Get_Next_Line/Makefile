# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kykim <kykim@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/09/08 20:52:15 by kykim             #+#    #+#              #
#    Updated: 2019/01/24 13:12:00 by kykim            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

 NAME = libgnl.a

 SRCS = get_next_line.c

 SRCO = get_next_line.o

 HEADER = get_next_line.h

 FLAG = -Wall -Werror -Wextra

 all: $(NAME)

 $(NAME) :
	gcc -c $(FLAG) -I $(HEADER) $(SRCS)
	ar rcs $(NAME) $(SRCO)
	ranlib $(NAME)

clean:
	rm -f $(SRCO)

fclean:
	rm -f $(NAME)

re: fclean all

.PHONY: all, clean, fclean, re