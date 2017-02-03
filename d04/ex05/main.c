/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gguiulfo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/14 18:55:21 by gguiulfo          #+#    #+#             */
/*   Updated: 2017/01/14 21:47:59 by gguiulfo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_sqrt(int nb);

int		main(void)
{
	printf("%d\n", ft_sqrt(26));
	printf("%d\n", ft_sqrt(25));
	printf("%d\n", ft_sqrt(4));
	printf("%d\n", ft_sqrt(1));
	printf("%d\n", ft_sqrt(9));
	printf("%d\n", ft_sqrt(0));
	printf("%d\n", ft_sqrt(-1));
	printf("%d\n", ft_sqrt(-10));
	return (0);
}
