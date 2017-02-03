/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gguiulfo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/14 18:07:04 by gguiulfo          #+#    #+#             */
/*   Updated: 2017/01/14 18:43:25 by gguiulfo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_recursive_power(int nb, int power);

int		main(void)
{
	printf("%d\n", ft_recursive_power(2, 6));
	printf("%d\n", ft_recursive_power(2, 0));
	printf("%d\n", ft_recursive_power(-2, 6));
	printf("%d\n", ft_recursive_power(-5, 3));
	printf("%d\n", ft_recursive_power(-5, 2));
	printf("%d\n", ft_recursive_power(-5, 0));
	printf("%d\n", ft_recursive_power(-5, 1));
	printf("%d\n", ft_recursive_power(0, 0));
	printf("%d\n", ft_recursive_power(1, 0));
	printf("%d\n", ft_recursive_power(0, 1));
	return (0);
}
