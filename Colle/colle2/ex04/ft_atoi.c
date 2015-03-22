/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtorsell <mtorsell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/07/07 00:55:58 by mtorsell          #+#    #+#             */
/*   Updated: 2014/07/19 23:39:03 by mtorsell         ###   ########.fr       */
/*   Updated: 2014/07/08 12:20:18 by mtorsell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
void ft_putchar(char c)
{
	write (1, &c, 1);
}

int ft_strlen (char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int	ft_atoi (char *str)
{
	int strlen;
	int i;
	int res;
	int tempres;
	int negcheck;

	strlen = ft_strlen(str);
	i = 0;
	res = 0;
	tempres = 0;
	negcheck = 0;
	if (str[0] == '-')
	{
		i = 1;
		negcheck = 1;
	}
	while (str[i] != str[strlen])
	{
		tempres = str[i] - 48;
		if (i == strlen - 1)
			res = (res + tempres);
		else
			res = (res + tempres) * 10;
		i++;
	}
	if (negcheck != 1)
		return (res);
	else
		return (res * -1);
}
