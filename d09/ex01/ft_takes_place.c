/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_takes_place.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gguiulfo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/20 14:25:51 by gguiulfo          #+#    #+#             */
/*   Updated: 2017/01/20 15:27:32 by gguiulfo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_hour(int hour)
{
	if (hour < 12)
	{
		if (hour == 0)
			hour = 12;
		printf("%d.00 A.M.", hour);
	}
	else
	{
		if (hour > 12)
		{
			hour -= 12;
		}
		printf("%d.00 P.M.", hour);
	}
}

void	ft_takes_place(int hour)
{
	if (hour >= 0 && hour < 24)
	{
		printf("THE FOLLOWING TAKES PLACE BETWEEN ");
		ft_hour(hour);
		printf(" AND ");
		ft_hour(hour + 1);
		printf("\n");
	}
}
