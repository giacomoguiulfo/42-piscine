/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gguiulfo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/13 23:30:50 by gguiulfo          #+#    #+#             */
/*   Updated: 2017/01/14 12:03:22 by gguiulfo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrev(char *str)
{
	char	temp;
	int		len;
	int		i;

	i = 0;
	len = 0;
	while (str[len] != '\0')
		len++;
	len--;
	while (str[i] != '\0')
	{
		temp = str[len];
		str[len] = str[i];
		str[i] = temp;
		len--;
		i++;
	}
	return (str);
}
