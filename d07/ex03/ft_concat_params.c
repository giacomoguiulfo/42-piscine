/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_params.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gguiulfo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/19 14:21:58 by gguiulfo          #+#    #+#             */
/*   Updated: 2017/01/19 16:28:40 by gguiulfo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_unapena(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

int		get_size(char argc, char **argv)
{
	int size;
	int i;

	size = 0;
	i = 1;
	while (i < argc)
	{
		size += ft_unapena(argv[i]);
		i++;
	}
	return (size);
}

char	*ft_concat_params(int argc, char **argv)
{
	char	*str;
	int		i;
	int		j;
	int		z;

	i = 1;
	z = 0;
	str = (char*)malloc(sizeof(*str) * get_size(argc, argv) + argc);
	while (i < argc)
	{
		j = 0;
		while (argv[i][j] != '\0')
		{
			str[z] = argv[i][j];
			j++;
			z++;
		}
		if (i != (argc - 1))
			str[z] = '\n';
		z++;
		i++;
	}
	z--;
	str[z] = '\0';
	return (str);
}
