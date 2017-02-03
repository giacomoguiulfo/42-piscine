/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gguiulfo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/19 12:07:30 by gguiulfo          #+#    #+#             */
/*   Updated: 2017/01/19 13:59:51 by gguiulfo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_ultimate_range(int **range, int min, int max);

int		main(void)
{
	int min = 7;
	int max = 15;
	int i = 0;
	int *range = NULL;
	int size;

	size = ft_ultimate_range(&range, min, max);
	printf("%d\n", size);
	while (i < size)
	{
		printf("%d\n", range[i]);
		i++;
	}
	return (0);
}
