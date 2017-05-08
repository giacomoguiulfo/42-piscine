/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_level_count.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gguiulfo <gguiulfo@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/20 20:57:22 by gguiulfo          #+#    #+#             */
/*   Updated: 2017/04/20 21:18:29 by gguiulfo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

int btree_level_count(t_btree *root)
{
	int lvl_right;
	int lvl_left;

	if (root == 0)
		return (-1);
	lvl_left = btree_level_count(root->left);
	lvl_right = btree_level_count(root->right);
	if (lvl_left > lvl_right)
		return (lvl_left + 1);
	else
		return (lvl_right + 1);
}
