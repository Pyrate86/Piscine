/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   colle03.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adacher <adacher@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/07/05 17:46:54 by adacher           #+#    #+#             */
/*   Updated: 2014/07/19 23:43:53 by mtorsell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void ft_putchar(char c);

void ft_writeline(int x, char first_c, char mid_c, char last_c)
{
	int i;

	i = 0;
	if (x >= 0)
		ft_putchar(first_c);
	if (x > 1)
	{
		while (i < x - 2)
		{
			ft_putchar(mid_c);
			i++;
		}
		ft_putchar(last_c);
	}
}

void colle (int x, int y)
{
	int i;

	i = 0;
	if (y >= 0 && x >= 0)
	{
		if (y >= 0)
		{
			ft_writeline(x, '/', '*', '\\');
			ft_putchar('\n');
		}
		if (y > 1)
		{
			while (i < y - 2)
			{
				ft_writeline(x, '*', ' ', '*');
				ft_putchar('\n');
				i++;
			}
			ft_writeline(x, '\\', '*', '/');
			ft_putchar('\n');
		}
	}
}
