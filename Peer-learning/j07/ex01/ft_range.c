/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghilbert <ghilbert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/07/14 05:22:16 by ghilbert          #+#    #+#             */
/*   Updated: 2014/07/14 06:51:46 by ghilbert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<stdlib.h>

int	*ft_range(int min, int max)
{
	int	*table;
	int	i;

	table = NULL;
	if (min >= max)
		return (table);
	table = (int *)malloc(sizeof(*table) * (max - min) + 1);
	i = 0;
	while (i < max - min)
	{
		table[i] = i + min;
		i++;
	}
	return (table);
}
