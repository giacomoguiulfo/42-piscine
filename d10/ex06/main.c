/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gguiulfo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/23 22:18:58 by gguiulfo          #+#    #+#             */
/*   Updated: 2017/01/24 14:01:52 by gguiulfo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int		do_op(int a, int b, char op)
{
	if (op == '+')
		return (a + b);
	if (op == '-')
		return (a - b);
	if (op == '*')
		return (a * b);
	if (op == '/' && b != 0)
		return (a / b);
	if (op == '%' && b != 0)
		return (a % b);
	else
		return (0);
}

int		main(int argc, char **argv)
{
	int		a;
	int		b;
	char	op;
	int		result;

	if (argc == 4)
	{
		a = ft_atoi(argv[1]);
		b = ft_atoi(argv[3]);
		op = argv[2][0];
		if (argv[2][1] == '\0')
			if (op == '/' && b == 0)
				ft_putstr("Stop : division by zero");
			else if (op == '%' && b == 0)
				ft_putstr("Stop : modulo by zero");
			else
			{
				result = do_op(a, b, op);
				ft_putnbr(result);
			}
		else
			ft_putnbr(0);
		ft_putchar('\n');
	}
	return (0);
}
