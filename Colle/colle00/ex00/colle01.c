/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   colle01.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asmets <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/07/06 01:56:00 by asmets            #+#    #+#             */
/*   Updated: 2014/07/06 21:11:57 by ghilbert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print_char(int coord_h, int coord_v, int max_h, int max_v)
{
	if (max_h == 0 && max_v == 0)
		ft_putchar('/');
	else if (coord_h == max_h && max_v == 0)
		ft_putchar('\\');
	else if ((max_h == 0 && coord_h == 0) && (coord_v == max_v))
		ft_putchar('\\');
	else if (coord_h != 0 &&
			coord_h != max_h &&
			coord_v != 0 &&
			coord_v != max_v)
		ft_putchar(' ');
	else if ((coord_h == 0 && coord_v == 0) ||
			(coord_h == max_h && coord_v == max_v))
		ft_putchar('/');
	else if ((coord_h == 0 && coord_v == max_v) ||
			(coord_h == max_h && coord_v == 0))
		ft_putchar('\\');
	else
		ft_putchar('*');
}

void	colle(int y, int x)
{
	int i;
	int j;

	i = 0;
	while (i < x)
	{
		j = 0;
		while (j < y)
		{
			ft_print_char(i, j, x - 1, y - 1);
			j++;
		}
		i++;
		if (!(x <= 0 || y <= 0))
			ft_putchar('\n');
	}
}
