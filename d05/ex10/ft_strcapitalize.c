/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gguiulfo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/17 22:59:59 by gguiulfo          #+#    #+#             */
/*   Updated: 2017/01/17 23:16:30 by gguiulfo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char		*ft_strcapitalize(char *str)
{
	int i;
	int a;
	int look;

	i = 0;
	a = 0;
	look = 1;
	while (str[i] != '\0')
	{
		if (str[i] == ' ' || str[i] == '\n' || str[i] == '+' || str[i] == '-' ||
		str[i] == '\f' || str[i] == '\r' || str[i] == '\v' || str[i] == '\t')
			look = 1;
		else if ((str[i] >= 97) && (str[i] <= 122) && (look == 1))
		{
			str[i] = str[i] - 32;
			look = 0;
		}
		else if ((str[i] >= 65) && (str[i] <= 90) && (look == 0))
		{
			str[i] = str[i] + 32;
			look = 0;
		}
		i++;
	}
	return (str);
}
