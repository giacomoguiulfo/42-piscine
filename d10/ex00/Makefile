# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gguiulfo <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/01/23 13:27:50 by gguiulfo          #+#    #+#              #
#    Updated: 2017/01/24 20:11:40 by gguiulfo         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRC = srcs/{ft_putchar.c,ft_putstr.c,ft_strcmp.c,ft_strlen.c,ft_swap.c}

OBJ = ft_putchar.o ft_putstr.o ft_strcmp.o ft_strlen.o ft_swap.o

HEADER = includes

all: $(NAME)

$(NAME):
	gcc -c -Wall -Wextra -Werror $(SRC) -I $(HEADER)
	ar rc libft.a $(OBJ)
	ranlib libft.a

clean:
	/bin/rm -f $(OBJ)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
