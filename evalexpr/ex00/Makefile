# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gguiulfo <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/01/29 20:36:40 by gguiulfo          #+#    #+#              #
#    Updated: 2017/01/29 20:47:47 by gguiulfo         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = eval_expr
SRC = main.c ft_putchar.c ft_putnbr.c ft_atoi.c eval_expr.c

all: $(NAME)

$(NAME):
	@gcc -Wall -Wextra -Werror $(SRC) -o $(NAME)

clean:
	@/bin/rm -f

fclean: clean
	@/bin/rm -f $(NAME)

re: clean all
