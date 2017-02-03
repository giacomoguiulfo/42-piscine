/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gguiulfo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/17 23:12:34 by gguiulfo          #+#    #+#             */
/*   Updated: 2017/01/17 23:39:52 by gguiulfo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_str_is_lowercase(char *str)
{
	int i;
	int a;
	int look;

	i = 0;
	a = 0;
	look = 1;
	if (str[i] == '\0')
		return (look);
	while (str[i] != '\0')
	{
		if ((str[i] >= 97) && (str[i] <= 122))
			look = 1;
		else
			return (0);
		i++;
	}
	return (look);
}
