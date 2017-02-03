/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gguiulfo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/13 14:53:53 by gguiulfo          #+#    #+#             */
/*   Updated: 2017/01/13 15:25:49 by gguiulfo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b);

int		main(void)
{
	int number1;
	int number2;

	number1 = 25;
	number2 = 5;
	ft_ultimate_div_mod(&number1, &number2);
	printf("number1: %d number2: %d", number1, number2);
	return (0);
}
