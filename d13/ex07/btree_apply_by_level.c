/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_apply_by_level.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gguiulfo <gguiulfo@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/20 21:19:45 by gguiulfo          #+#    #+#             */
/*   Updated: 2017/04/20 21:19:54 by gguiulfo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void btree_apply_by_level(t_btree *root, void (*applyf)(void *item,
										int current_level, int is_first_elem))
