/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghilbert <ghilbert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/07/14 04:50:28 by ghilbert          #+#    #+#             */
/*   Updated: 2014/07/14 06:09:37 by ghilbert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include	<stdlib.h>

char	*ft_strdup(char *src)
{
	int		length;
	char	*dyn_str;

	length = 1;
	while (src[length] != '\0')
		length++;
	dyn_str = (char*)malloc(sizeof(*dyn_str) * length);
	length = 0;
	while (src[length] != '\0')
	{
		dyn_str[length] = src[length];
		length++;
	}
	dyn_str[length] = '\0';
	return (dyn_str);
}
