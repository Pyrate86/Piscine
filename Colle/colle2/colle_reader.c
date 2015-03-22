/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   colle_reader.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghilbert <ghilbert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/07/20 20:00:44 by ghilbert          #+#    #+#             */
/*   Updated: 2014/07/20 23:25:05 by ghilbert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"colle_reader.h"

int		get_width(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\n')
	{
		i++;
	}
	return (i);
}

int		get_height(char *str)
{
	int i;
	int h;

	i = 0;
	h = 0;
	while (str[i] != '\0')
	{
		if (str[i] == '\n')
			h++;
		i++;
	}
	return (h);
}

char    *ft_read(void)
{
	int        ret;
	char    *buf;

	buf = (char*)malloc(sizeof(*buf) * 4096);
	ret = read(0, buf, 4096);
	buf[ret] = '\0';
	return (buf);
}
