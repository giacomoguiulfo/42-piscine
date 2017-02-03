/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gguiulfo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/13 14:20:07 by gguiulfo          #+#    #+#             */
/*   Updated: 2017/01/13 14:26:09 by gguiulfo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod);

int		main(void)
{
	int div;
	int mod;

	div = 0;
	mod = 0;
	ft_div_mod(40, 6, &div, &mod);
	printf("div: %d mod: %d\n", div, mod);
	return (0);
}
