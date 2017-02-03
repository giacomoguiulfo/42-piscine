/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gguiulfo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/18 18:48:13 by gguiulfo          #+#    #+#             */
/*   Updated: 2017/01/18 19:50:32 by gguiulfo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

int		main(int argc, char **argv)
{
	int n;
	int j;

	n = argc - 1;
	while (n > 0)
	{
		j = 0;
		while (argv[n][j])
		{
			ft_putchar(argv[n][j]);
			j++;
		}
		ft_putchar('\n');
		n--;
	}
	return (0);
}
