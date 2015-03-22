/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   func.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghilbert <ghilbert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/07/20 19:53:54 by ghilbert          #+#    #+#             */
/*   Updated: 2014/07/20 22:10:46 by ghilbert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "func.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}

void	ft_putnbr(int nb)
{
	if (nb / 10 != 0)
		ft_putnbr(nb /10);
	ft_putchar(nb % 10 + '0');
}

int		ft_writeline(int x, int position, char first_c, char mid_c, char last_c, char *str)
{
	int i;

	i = 0;
	if (x >= 0)
		str[position] = first_c;
	if (x > 1)
	{
		while (i < x - 2)
		{
			str[position + i + 1] = mid_c;
			i++;
		}
		str[position + i + 1] = last_c;
		str[position + x] = '\n';
	}
	return (i + 2);
}


