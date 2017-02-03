/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gguiulfo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/13 14:04:22 by gguiulfo          #+#    #+#             */
/*   Updated: 2017/01/13 14:09:39 by gguiulfo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_swap(int *a, int *b);

int		main(void)
{
	int number1;
	int number2;

	number1 = 5;
	number2 = 10;
	ft_swap(&number1, &number2);
	printf("number1 = %d number2 = %d\n", number1, number2);
	return (0);
}
