/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_last.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gguiulfo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/24 21:40:45 by gguiulfo          #+#    #+#             */
/*   Updated: 2017/01/25 21:35:20 by gguiulfo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_list_last(t_list *begin_list)
{
	t_list *node;

	node = begin_list;
	if (node)
	{
		while (node->next)
		{
			node = node->next;
		}
		return (node);
	}
	else
	{
		return (0);
	}
}
