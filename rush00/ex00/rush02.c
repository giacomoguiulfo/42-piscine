/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afan <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/14 19:29:57 by afan              #+#    #+#             */
/*   Updated: 2017/01/15 16:15:53 by mnunnari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

void	print_cell(int col_num, int row_num, int total_cols, int total_rows)
{
	if (col_num == 1 && row_num == 1)
		ft_putchar('A');
	else if (col_num == total_cols && row_num == 1)
		ft_putchar('A');
	else if (col_num == 1 && row_num == total_rows)
		ft_putchar('C');
	else if (col_num == total_cols && row_num == total_rows)
		ft_putchar('C');
	else if (col_num != 1 && col_num != total_cols
			&& row_num != 1 && row_num != total_rows)
		ft_putchar(' ');
	else
		ft_putchar('B');
}

void	print_row(int row_num, int total_cols, int total_rows)
{
	int col_num;

	col_num = 1;
	while (col_num <= total_cols)
	{
		print_cell(col_num, row_num, total_cols, total_rows);
		col_num++;
	}
}

void	rush(int x, int y)
{
	int row_num;

	row_num = 1;
	while (row_num <= y && x > 0)
	{
		print_row(row_num, x, y);
		ft_putchar('\n');
		row_num++;
	}
}
