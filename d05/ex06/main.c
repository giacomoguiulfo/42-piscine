/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gguiulfo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/17 15:40:05 by gguiulfo          #+#    #+#             */
/*   Updated: 2017/01/17 22:02:35 by gguiulfo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_strcmp(char *s1, char *s2);

int		main(void)
{
	char chicho[] = " Hellowss";
	char chichico[] = " Hallowss";

	printf("%d", ft_strcmp(chicho, chichico));
}
