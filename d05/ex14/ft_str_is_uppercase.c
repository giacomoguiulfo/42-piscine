/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gguiulfo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/17 23:41:16 by gguiulfo          #+#    #+#             */
/*   Updated: 2017/01/17 23:41:25 by gguiulfo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_str_is_uppercase(char *str)
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
		if ((str[i] >= 65) && (str[i] <= 90))
			look = 1;
		else
			return (0);
		i++;
	}
	return (look);
}
