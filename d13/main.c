/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gguiulfo <gguiulfo@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/20 19:20:13 by gguiulfo          #+#    #+#             */
/*   Updated: 2017/04/20 19:48:37 by gguiulfo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_btree.h"

t_btree *btree_create_node(void *item);

int main()
{
	int a = 5;
	t_btree *node = btree_create_node(&a);
	printf("%p %p '%d'\n", node->left, node->right, *((int*)node->item));
	return 0;
}
