/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gguiulfo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/14 23:06:00 by gguiulfo          #+#    #+#             */
/*   Updated: 2017/01/14 23:16:18 by gguiulfo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_find_next_prime(int nb);

int		main(void)
{
	printf("%d\n", ft_find_next_prime(2));
	printf("%d\n", ft_find_next_prime(3));
	printf("%d\n", ft_find_next_prime(5));
	printf("%d\n", ft_find_next_prime(42));
	printf("%d\n", ft_find_next_prime(35));
	printf("%d\n", ft_find_next_prime(99));
	printf("%d\n", ft_find_next_prime(21));
	printf("%d\n", ft_find_next_prime(-60));
	printf("%d\n", ft_find_next_prime(1982));
	printf("%d\n", ft_find_next_prime(12));
	printf("%d\n", ft_find_next_prime(45));
	return (0);
}
