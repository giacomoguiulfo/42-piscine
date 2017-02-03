/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gguiulfo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/14 12:32:52 by gguiulfo          #+#    #+#             */
/*   Updated: 2017/01/14 16:04:16 by gguiulfo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int 	ft_iterative_factorial(int nb);

int		main(void)
{
	printf("%d %d %d %d %d\n", ft_iterative_factorial(6), ft_iterative_factorial(8), ft_iterative_factorial(5), ft_iterative_factorial(0), ft_iterative_factorial(1));
	return (0);
}
