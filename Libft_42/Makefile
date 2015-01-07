# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    MAKEFILE                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ldeckers <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2014/11/19 20:50:39 by ldeckers          #+#    #+#              #
#    Updated: 2014/12/27 08:37:44 by ldeckers         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc -Wall -Werror -Wextra
SRC = ft_atoi.c\
	ft_memset.c\
	ft_memcpy.c\
	ft_memccpy.c\
	ft_memmove.c\
	ft_memchr.c\
	ft_memcmp.c\
	ft_strlen.c\
	ft_strdup.c\
	ft_strcpy.c\
	ft_strncpy.c\
	ft_strcat.c\
	ft_strncat.c\
	ft_strlcat.c\
	ft_strnew.c\
	ft_strchr.c\
	ft_strstr.c\
	ft_strcmp.c\
	ft_strncmp.c\
	ft_isalpha.c\
	ft_isdigit.c\
	ft_isalnum.c\
	ft_isascii.c\
	ft_isprint.c\
	ft_isspace.c\
	ft_putchar.c\
	ft_putchar_fd.c\
	ft_putendl.c\
	ft_putendl_fd.c\
	ft_putnbr.c\
	ft_putnbr_fd.c\
	ft_putstr.c\
	ft_putstr_fd.c\
	ft_toupper.c\
	ft_tolower.c\
	ft_memalloc.c\
	ft_memdel.c

OBJ= $(SRC:.c=.o)
NAME= libft.a

all: $(NAME)

$(NAME):
		@$(CC) -c $(SRC)
		@ar rc $(NAME) $(OBJ)
		@ranlib $(NAME)
		@echo "libft ok"
clean:
		@rm -f $(OBJ)
		@echo "Clean ok"

fclean: clean
		@rm -f $(NAME)
		@echo "fclean ok"
re: fclean all
