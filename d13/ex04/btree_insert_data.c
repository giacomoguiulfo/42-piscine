/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_insert_data.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gguiulfo <gguiulfo@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/20 20:23:14 by gguiulfo          #+#    #+#             */
/*   Updated: 2017/04/20 20:34:16 by gguiulfo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

void	btree_insert_data(t_btree **root, void *item,
													int (*cmpf)(void *, void *))
{
	if (*root == 0)
		*root = btree_create_node(item);
	else if (cmpf((*root)->item, item) < 0)
		*root = btree_insert_data(&(*root)->left, item, cmpf);
	else
		*root = btree_insert_data(&(*root)->right, item, cmpf);
}
