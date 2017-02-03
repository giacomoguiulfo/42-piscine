# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gguiulfo <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/01/23 21:34:39 by gguiulfo          #+#    #+#              #
#    Updated: 2017/01/24 18:59:49 by gguiulfo         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = do-op
SRC = main.c ft_putchar.c ft_putnbr.c ft_atoi.c ft_putstr.c

all:
	@gcc -Wall -Wextra -Werror $(SRC) -o $(NAME)

clean:
	@/bin/rm -f

fclean: clean
	@/bin/rm -f $(NAME)

re: clean all
