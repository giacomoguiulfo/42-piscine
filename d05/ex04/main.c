/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gguiulfo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/16 23:03:33 by gguiulfo          #+#    #+#             */
/*   Updated: 2017/01/17 20:25:12 by gguiulfo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n);

int		main(void) 
{
    char dest[6] = { 'H', 'E', 'L', 'L', 'O', '\0'};
    char src[7] = { 'S', 'O', 'U', 'R', 'C', 'E', '\0'};

    ft_strncpy(dest, src, 3);
    printf("Dest: %s Src: %s", dest, src);

    return 0;
}
