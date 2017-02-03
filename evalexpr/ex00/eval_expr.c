/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   eval_expr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gguiulfo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/29 17:36:35 by gguiulfo          #+#    #+#             */
/*   Updated: 2017/01/29 20:42:36 by gguiulfo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_head.h"

int	ft_par_or_atom(char **str)
{
	int num;

	while (**str == ' ')
		(*str)++;
	if (**str == '(')
	{
		(*str)++;
		num = ft_summands(str);
		if (**str == ')')
			(*str)++;
		return (num);
	}
	return (ft_atoi(str));
}

int	ft_factors(char **str)
{
	int		num1;
	int		num2;
	char	op;

	num1 = ft_par_or_atom(str);
	while (**str)
	{
		while (**str == ' ')
			(*str)++;
		op = **str;
		if (op != '%' && op != '*' && op != '/')
			return (num1);
		(*str)++;
		num2 = ft_par_or_atom(str);
		if (op == '%')
			num1 = num1 % num2;
		else if (op == '*')
			num1 = num1 * num2;
		else
			num1 = num1 / num2;
	}
	return (num1);
}

int	ft_summands(char **str)
{
	int		num1;
	int		num2;
	char	op;

	num1 = ft_factors(str);
	while (**str)
	{
		while (**str == ' ')
			(*str)++;
		op = **str;
		if (op != '+' && op != '-')
			return (num1);
		(*str)++;
		num2 = ft_factors(str);
		if (op == '+')
			num1 = num1 + num2;
		else
			num1 = num1 - num2;
	}
	return (num1);
}

int	eval_expr(char *str)
{
	return (ft_summands(&str));
}
