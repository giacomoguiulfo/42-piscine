/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_head.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gguiulfo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/28 16:44:39 by gguiulfo          #+#    #+#             */
/*   Updated: 2017/01/29 20:41:48 by gguiulfo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_HEAD_H
# define FT_HEAD_H

void				ft_putchar(char c);
int					ft_atoi(char **str);
void				ft_putnbr(int nb);
int					ft_par_or_atom(char **str);
int					ft_factors(char **str);
int					ft_summands(char **str);

#endif
