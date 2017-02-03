/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gguiulfo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/16 14:10:56 by gguiulfo          #+#    #+#             */
/*   Updated: 2017/01/16 22:13:41 by gguiulfo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_atoi(char *str);

int		main(void)
{
	int i;

	i = ft_atoi(" 	1234");
	printf("%d", i);
	printf("%d", ft_atoi("-132"));
	printf("%d", ft_atoi("+121") + 5);
	printf("%d", ft_atoi("lu 123lo"));
	printf("%d", ft_atoi("  1chicho123"));
	printf("%d", ft_atoi("--42"));
	return (0);
}
