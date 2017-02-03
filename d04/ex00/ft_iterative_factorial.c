/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gguiulfo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/14 12:32:16 by gguiulfo          #+#    #+#             */
/*   Updated: 2017/01/14 15:30:06 by gguiulfo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_factorial(int nb)
{
	int i;
	int total;

	i = 1;
	total = 1;
	if (nb == 0)
	{
		return (1);
	}
	else if (nb >= 1 && nb < 13)
	{
		while (i <= nb)
		{
			total *= i;
			i++;
		}
		return (total);
	}
	return (0);
}
