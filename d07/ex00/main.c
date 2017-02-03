/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gguiulfo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/18 23:25:06 by gguiulfo          #+#    #+#             */
/*   Updated: 2017/01/19 10:58:50 by gguiulfo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strdup(char *src);

int		main(void)
{
	char str[] = "Abcdefghijklmn";
	char *ptrs;

	ptrs = ft_strdup(str);
	printf("%s", ptrs);
}
