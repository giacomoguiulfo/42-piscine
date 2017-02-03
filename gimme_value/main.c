/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gguiulfo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/01 14:53:13 by gguiulfo          #+#    #+#             */
/*   Updated: 2017/02/01 15:01:53 by gguiulfo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int		gimme_value(char **tab, char c);

int		main(void)
{
	char **tab;

	tab = (char**)malloc(sizeof(tab) * 5);
	tab[0] = "I really miss to eat baguette";
	tab[1] = "instead i’m eating burger";
	tab[2] = "i dont think it’s healthy";
	tab[3] = "but, hell yeah, its Tasty !!!!";
	tab[4] = 0;

	printf("%d\n",gimme_value(tab, 'i'));
	printf("%d\n",gimme_value(tab, ' '));
	printf("%d\n",gimme_value(tab, 'b'));
	printf("%d\n",gimme_value(tab, 'I'));
	return (0);
}
