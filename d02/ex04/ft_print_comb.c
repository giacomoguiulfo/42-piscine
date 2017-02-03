/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gguiulfo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/12 15:08:36 by gguiulfo          #+#    #+#             */
/*   Updated: 2017/01/12 22:06:37 by gguiulfo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

void	ft_print_comb(void)
{
	int num[3];

	num[0] = 48;
	while (num[0] <= 57)
	{
		num[1] = num[0] + 1;
		while (num[1] <= 57)
		{
			num[2] = num[1] + 1;
			while (num[2] <= 57)
			{
				ft_putchar(num[0]);
				ft_putchar(num[1]);
				ft_putchar(num[2]);
				if (!(num[0] == 55 && num[1] == 56 && num[2] == 57))
				{
					ft_putchar(',');
					ft_putchar(' ');
				}
				num[2]++;
			}
			num[1]++;
		}
		num[0]++;
	}
}
