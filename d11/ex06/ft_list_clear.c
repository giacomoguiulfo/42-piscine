/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_clear.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gguiulfo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/25 15:52:44 by gguiulfo          #+#    #+#             */
/*   Updated: 2017/01/25 17:37:16 by gguiulfo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>

void	ft_list_clear(t_list **begin_list)
{
	t_list *node;
	t_list *temp;

	node = *begin_list;
	if (node)
	{
		while (node->next)
		{
			temp = node->next;
			free(node);
			node = temp;
		}
		*begin_list = 0;
	}
}
