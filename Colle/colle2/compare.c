/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   compare.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghilbert <ghilbert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/07/20 20:24:49 by ghilbert          #+#    #+#             */
/*   Updated: 2014/07/20 23:29:12 by ghilbert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"compare.h"
#include	"colle_maker.h"


int		ft_match(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] != '\0')
	{
		if (s1[i] != s2[i])
			return(0);
		i++;
	}
	return (1);
}

int		ft_compare(char *str, int width, int height)
{
	int res;

	res = 0;
	if (ft_match(str, colle00(width, height)))
		res += 1;
	if(ft_match(str, colle01(width, height)))
		res += 2;
	if (ft_match(str, colle02(width, height)))
		res += 4;
	if(ft_match(str, colle03(width, height)))
		res += 8;
	if(ft_match(str, colle04(width, height)))
		res += 16;
	return (res);
}
