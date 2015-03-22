/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   output.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghilbert <ghilbert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/07/20 21:26:48 by ghilbert          #+#    #+#             */
/*   Updated: 2014/07/20 23:35:53 by ghilbert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"func.h"
#include	"output.h"

void	ft_put_result(int res, int width, int height)
{
	int i;
	int pow;

	i = 16;
	pow = 0;
	while (i > 0)
	{
		if (res >= i)
		{
			ft_putstr("[colle0");
			pow = power_of(i);
			ft_putchar(pow + '0');
			ft_putstr("] [");
			ft_putnbr(width);
			ft_putstr("] [");
			ft_putnbr(height);
			ft_putstr("]");
			res = res - i;
		}
		i /= 2;
		if (res <= 0 )
			ft_putstr(" || ");
	}
}

int		power_of(int i)
{
	int pow = 0;
	while (i > 1)
	{
		i /= 2;
		pow++;
	}
	return (pow);
}
