/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gguiulfo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/20 22:46:37 by gguiulfo          #+#    #+#             */
/*   Updated: 2017/01/20 22:48:49 by gguiulfo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	**ft_split_whitespaces(char *str);

int		main(void)
{
	char** res;
for (res = ft_split_whitespaces("asdf qwerty zxcv"); *res != 0; res++)
	printf("'%s',", *res);
printf("\n");
for (res = ft_split_whitespaces("s1   s2 \t\n\t\ns3"); *res != 0; res++)
	printf("'%s',", *res);
printf("\n");
	return (0);
}
