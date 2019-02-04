 # **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kykim <marvin@42.fr>                       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/04/25 15:36:10 by kykim             #+#    #+#              #
#    Updated: 2018/05/05 18:17:23 by kykim            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRCS = ft_atoi.c \
	   ft_bzero.c \
	   ft_isalnum.c \
	   ft_isalpha.c \
	   ft_isascii.c \
	   ft_isdigit.c \
	   ft_isprint.c \
	   ft_memccpy.c \
	   ft_memchr.c \
	   ft_memcmp.c \
	   ft_memcpy.c \
	   ft_memmove.c \
	   ft_memset.c \
	   ft_strcat.c \
	   ft_strchr.c \
	   ft_strcmp.c \
	   ft_strncmp.c \
	   ft_strcpy.c \
	   ft_strdup.c \
	   ft_strlcat.c \
	   ft_strlen.c \
	   ft_strncat.c \
	   ft_strncpy.c \
	   ft_strnstr.c \
	   ft_strrchr.c \
	   ft_strstr.c \
	   ft_tolower.c \
	   ft_toupper.c \
	   ft_memalloc.c \
	   ft_memdel.c \
	   ft_strnew.c \
	   ft_strdel.c \
	   ft_strclr.c \
	   ft_striter.c \
	   ft_striteri.c \
	   ft_strmap.c \
	   ft_strmapi.c \
	   ft_strequ.c \
	   ft_strnequ.c \
	   ft_strsub.c \
	   ft_strjoin.c \
	   ft_strtrim.c \
	   ft_strsplit.c \
	   ft_itoa.c \
	   ft_putchar.c \
	   ft_putstr.c \
	   ft_putendl.c \
	   ft_putnbr.c \
	   ft_putchar_fd.c \
	   ft_putstr_fd.c \
	   ft_putendl_fd.c \
	   ft_putnbr_fd.c \
	   ft_lstnew.c \
	   ft_lstdelone.c \
	   ft_lstdel.c \
	   ft_lstadd.c \
	   ft_lstiter.c \
	   ft_lstmap.c \
	   ft_getdigit.c \
	   ft_mallocword.c \
	   ft_countword.c \
	   ft_strrev.c \
	   ft_swap_bits.c \
	   ft_reverse_bits.c \
	   ft_print_bits.c \

SRCO = ft_atoi.o \
	   ft_bzero.o \
	   ft_isalnum.o \
	   ft_isalpha.o \
	   ft_isascii.o \
	   ft_isdigit.o \
	   ft_isprint.o \
	   ft_memccpy.o \
	   ft_memchr.o \
	   ft_memcmp.o \
	   ft_memcpy.o \
	   ft_memmove.o \
	   ft_memset.o \
	   ft_strcat.o \
	   ft_strchr.o \
	   ft_strcmp.o \
	   ft_strncmp.o \
	   ft_strcpy.o \
	   ft_strdup.o \
	   ft_strlcat.o \
	   ft_strlen.o \
	   ft_strncat.o \
	   ft_strncpy.o \
	   ft_strnstr.o \
	   ft_strrchr.o \
	   ft_strstr.o \
	   ft_tolower.o \
	   ft_toupper.o \
	   ft_memalloc.o \
	   ft_memdel.o \
	   ft_strnew.o \
	   ft_strdel.o \
	   ft_strclr.o \
	   ft_striter.o \
	   ft_striteri.o \
	   ft_strmap.o \
	   ft_strmapi.o \
	   ft_strequ.o \
	   ft_strnequ.o \
	   ft_strsub.o \
	   ft_strjoin.o \
	   ft_strtrim.o \
	   ft_strsplit.o \
	   ft_itoa.o \
	   ft_putchar.o \
	   ft_putstr.o \
	   ft_putendl.o \
	   ft_putnbr.o \
	   ft_putchar_fd.o \
	   ft_putstr_fd.o \
	   ft_putendl_fd.o \
	   ft_putnbr_fd.o \
	   ft_lstnew.o \
	   ft_lstdelone.o \
	   ft_lstdel.o \
	   ft_lstadd.o \
	   ft_lstiter.o \
	   ft_lstmap.o \
	   ft_getdigit.o \
	   ft_mallocword.o \
	   ft_countword.o \
	   ft_strrev.o \
	   ft_swap_bits.o \
	   ft_reverse_bits.o \
	   ft_print_bits.o \

HEADER = libft.h

FLAG = -Wall -Werror -Wextra

all: $(NAME)

$(NAME) :
	gcc -c  $(FLAG) -I $(HEADER) $(SRCS) 
	ar rc $(NAME) $(SRCO) 
	ranlib $(NAME)

clean:
	rm -f $(SRCO)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all, clean, fclean, re
