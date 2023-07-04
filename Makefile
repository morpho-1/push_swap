# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aylemrab <aylemrab@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/07/04 12:41:40 by aylemrab          #+#    #+#              #
#    Updated: 2023/07/04 13:15:35 by aylemrab         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap

CC = cc

CFLAGS = -Wall -Wextra -Werror

HDR = push_swap.h

SRC =  push_swap.c stack.c utils.c

OBJ = $(SRC:.c=.o)

all: push_swap

ft_printf/libftprintf.a:
	@make -C ft_printf --no-print-directory

$(NAME) : $(OBJ) ft_printf/libftprintf.a
	$(CC) $(CFLAGS) $(OBJ) ft_printf/libftprintf.a -o $(NAME)

%.o : %.c $(HDR) ft_printf/ft_printf.h
	$(CC) $(CFLAGS) -c $< -o $@

clean :
	rm -rf $(OBJ) $(NAME)
	@make clean -C ft_printf --no-print-directory

fclean: clean
	rm -rf $(NAME)
	@make fclean -C ft_printf --no-print-directory
	
re: fclean all