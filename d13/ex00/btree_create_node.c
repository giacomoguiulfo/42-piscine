/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_create_node.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gguiulfo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/27 13:46:29 by gguiulfo          #+#    #+#             */
/*   Updated: 2017/01/27 14:31:24 by gguiulfo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_btree.h"

t_btree		*btree_create_node(void *item)
{
	t_btree	*rs;

	rs = (t_btree*)malloc(sizeof(t_btree));
	if (rs)
	{
		rs->item = item;
		rs->right = 0;
		rs->left = 0;
	}
	return (rs);
}
