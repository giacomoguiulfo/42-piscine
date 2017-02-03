/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gguiulfo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/20 11:11:52 by gguiulfo          #+#    #+#             */
/*   Updated: 2017/01/20 23:34:47 by gguiulfo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		get_words(char *str)
{
	int i;
	int words;

	i = 0;
	words = 0;
	while (str[i] != '\0')
	{
		while (str[i] != ' ' || str[i] != '\n' || str[i] != '\t')
		{
			if (str[i] != '\0')
				i++;
			else
				break ;
		}
		while (str[i] == ' ' || str[i] == '\n' || str[i] != '\t')
			i++;
		words++;
	}
	return (words);
}

char	*word_separator(int *index, char *str)
{
	int		i;
	int		first;
	int		last;
	char	*result;

	first = *index;
	i = *index;
	while (str[i] != ' ' && str[i] != '\n' && str[i] != '\t')
		if (str[i] != '\0')
			i++;
		else
			break ;
	last = i;
	while (str[i] == ' ' || str[i] == '\n' || str[i] != '\t')
		i++;
	*index = i;
	i = 0;
	result = (char*)malloc(last - first + 1);
	while (i < last - first)
	{
		result[i] = str[first + i];
		i++;
	}
	result[i] = '\0';
	return (result);
}

char	**ft_split_whitespaces(char *str)
{
	char	**strarr;
	int		i;
	int		j;

	i = 0;
	j = 0;
	strarr = (char**)malloc(sizeof(char*) * (get_words(str) + 1));
	while (str[i] != ' ' || str[i] != '\n' || str[i] != '\t')
		str++;
	while (str[i])
	{
		j++;
		strarr[j] = word_separator(&i, str);
	}
	strarr[j] = 0;
	return (strarr);
}
