/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gguiulfo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/23 19:59:27 by gguiulfo          #+#    #+#             */
/*   Updated: 2017/01/23 20:00:01 by gguiulfo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		*ft_map(int *tab, int length, int (*f)(int));

int		ft_increment(int n)
{
	return (n + 1);

}

int		main(void)
{
	int *res;
	int tab[3] = { 5, 3, 5 };
	int	i = 0;

	res = ft_map(tab, 3, &ft_increment);
	while (i < 3)
	{
		printf("%d", *res++);
		i++;
	}
	return (0);
}
