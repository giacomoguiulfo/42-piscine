/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gguiulfo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/19 17:09:54 by gguiulfo          #+#    #+#             */
/*   Updated: 2017/01/19 22:32:58 by gguiulfo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_unapena(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		while (str[i] == " " || str[i] == "\n" || str[i] == "\t")
	}
}

int		get_words(char *str)
{
	int i;
	int is_word;

	i = 0;
	is_word = 1;
	while (str[i])
	{
		if (str[i] == ' ' || str[i] == '-' || str[i] == '+')
			is_word = 1;
		else if (is_lowercase(str[i]) && is_word == 1)
		{
			str[i] -= 32;
		is_word = 0;
		}
		else if (is_upcase(str[i]) && is_word != 1)
		{
			str[i] += 32;
			is_word = 0;
		}
		else
			is_word = 0;
		i++;
	}
	return (word_count);
}

char	**ft_split_whitespaces(char *str)
{
	int i;
	char **words;


	i = 0;
	
	while ()
	{
		words[i] = (char*)malloc(sizeof(**words) *)
	}
	while (str[i])
	{
		while (str[i] == " " || str[i] == "\n" || str[i] == "\t")
			i++;

	}
	return (words);
}
