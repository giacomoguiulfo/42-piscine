/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gguiulfo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/14 22:27:26 by gguiulfo          #+#    #+#             */
/*   Updated: 2017/01/14 22:47:34 by gguiulfo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_is_prime(int nb);

int		main(void)
{
	printf("%d\n", ft_is_prime(-5));
	printf("%d\n", ft_is_prime(-4));
	printf("%d\n", ft_is_prime(0));
	printf("%d\n", ft_is_prime(1));
	printf("%d\n", ft_is_prime(2));
	printf("%d\n", ft_is_prime(3));
	printf("%d\n", ft_is_prime(4));
	printf("%d\n", ft_is_prime(5));
	printf("%d\n", ft_is_prime(6));
	printf("%d\n", ft_is_prime(7));
	printf("%d\n", ft_is_prime(25));
	printf("%d\n", ft_is_prime(27));
	printf("%d\n", ft_is_prime(37));
	printf("%d\n", ft_is_prime(39));
	printf("%d\n", ft_is_prime(12347));
	return (0);
}
