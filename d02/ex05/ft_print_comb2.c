/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gguiulfo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/12 23:30:55 by gguiulfo          #+#    #+#             */
/*   Updated: 2017/01/12 23:40:19 by gguiulfo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int     ft_putchar(char c);

int     ft_decide(int a, int b, int c)
{
	if (a >= b || b >= c || a == c)
	{
	}
	else
	{
		if(a == 7 && b == 8 && c == 9 )
		{
			ft_putchar(a + '0');
			ft_putchar(b + '0');
			ft_putchar(c + '0');
		}
		else
		{
			ft_putchar(a + '0');
			ft_putchar(b + '0');
			ft_putchar(c + '0');
			ft_putchar(',');
			ft_putchar(' ');
		}
	   	return (0);
}

int     ft_count(int a, int b, int c, int i)
{
	while (i < 1000)
	{
		if (c == 9)
		{
			c = 0;
			if (b == 9)
			{
				b = 0;
				a = a + 1;
			}
			else
			{
				b = b + 1;
			}
		}
		else
		{
			c = c + 1;
		}
		i = i + 1;
		ft_decide(a, b, c);
		return (0);
}
