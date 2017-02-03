/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_find.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gguiulfo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/25 22:55:04 by gguiulfo          #+#    #+#             */
/*   Updated: 2017/01/25 23:01:41 by gguiulfo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_list_find(t_list *begin_list, void *data_ref, int (*cmp)())
{
	t_list *node;
	t_list *nulle;

	node = begin_list;
	nulle = 0;
	while (node)
	{
		if (!(cmp(node->data, data_ref)))
			return (node);
		node = node->next;
	}
	return (nulle);
}
