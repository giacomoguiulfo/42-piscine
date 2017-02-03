/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gguiulfo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/20 15:42:54 by gguiulfo          #+#    #+#             */
/*   Updated: 2017/01/20 15:50:03 by gguiulfo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_button(int i, int j, int k);

int main(void)
{
	printf("%d\n", ft_button(1, 2, 3));
	printf("%d\n", ft_button(100, -2, 43));
	printf("%d\n", ft_button(10, 25, 30));
	printf("%d\n", ft_button(-1, 2, 2));
	return (0);
}
