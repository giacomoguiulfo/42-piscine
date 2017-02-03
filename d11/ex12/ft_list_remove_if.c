/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_remove_if.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gguiulfo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/25 23:06:42 by gguiulfo          #+#    #+#             */
/*   Updated: 2017/01/25 23:29:18 by gguiulfo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>

void	ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)())
{
	t_list *temp;
	t_list *current;
	t_list *next;

	current = *begin_list;
	next = *begin_list;
	if (!(cmp(current->data, data_ref)))
	{
		*begin_list = current->next;
		free(current);
		current = next;
	}
	while (current)
	{
		next = current->next;
		if (!(cmp(current->data, data_ref)))
		{

		}
	}
}
