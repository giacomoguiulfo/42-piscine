/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gguiulfo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/19 11:05:11 by gguiulfo          #+#    #+#             */
/*   Updated: 2017/01/19 16:42:37 by gguiulfo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		*ft_range(int min, int max);

int		main(void)
{
	int *arr;
	int i;
	int min;
	int max;

	min = 7;
	max = 15;
	i = 0;
	arr = ft_range(1, -3);
	while (i < max - min && arr != 0)
	{
		printf("%d\n", arr[i]);
		i++;
	}
	return (0);
}
