/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghilbert <ghilbert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/07/16 09:36:32 by ghilbert          #+#    #+#             */
/*   Updated: 2014/07/16 09:40:59 by ghilbert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_map(int *tab, int length, int(*f)(int))
{
	int i;
	int *r_tab;

	i = 0;
	r_tab = (int *)malloc(sizeof(int) * length);
	while (i < length)
	{
		r_tab[i] = f(tab[i]);
		i++;
	}
	return (r_tab);
}
