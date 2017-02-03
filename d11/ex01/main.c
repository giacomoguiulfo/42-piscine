/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gguiulfo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/24 17:51:12 by gguiulfo          #+#    #+#             */
/*   Updated: 2017/01/24 21:04:16 by gguiulfo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include "stdio.h"
#include <stdlib.h>
#include <unistd.h>



void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}

void ft_print_list(t_list *list)
{
	while (list)
	{
		ft_putstr(list->data);
		list = list->next;
	}
}

void	ft_list_push_back(t_list **begin_list, void *data);

int		main(void)
{
	t_list	*list;
	char	*s1;
	char	*s2;
	char	*s3;

	s1 = "toto ";
	s2 = "tutu ";
	s3 = "tata ";
	list = (t_list*)malloc(sizeof(t_list*));
	list = ft_create_elem(s1);
	ft_print_list(list);
	ft_putchar('\n');
	ft_list_push_back(&list, s2);
	ft_print_list(list);
	ft_putchar('\n');
	ft_list_push_back(&list, s3);
	ft_print_list(list);
	ft_putchar('\n');
	return (0);
}
