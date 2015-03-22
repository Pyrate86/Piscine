/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   colle_maker.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghilbert <ghilbert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/07/20 19:08:04 by ghilbert          #+#    #+#             */
/*   Updated: 2014/07/20 23:29:11 by ghilbert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"colle_maker.h"
#include	"func.h"

char	*colle00(int x, int y)
{
	int		i;
	int		j;
	char	*table;

	i = 0;
	j = 0;
	table = (char *)malloc(sizeof(char) * (x *(y + 1)) + 1);
	if (y >= 0 && x >= 0)
	{
		if (y >= 0)
		{
			j += ft_writeline(x, j, 'o', '-', 'o', table) + 1;
		}
		if (y > 1)
		{
			while (i < y - 2)
			{
				j += ft_writeline(x, j, '|', ' ', '|', table) + 1;
				i++;
			}
			ft_writeline(x, j, 'o', '-', 'o', table);
		}
	}
	return (table);
}

char	*colle01(int x, int y)
{
	int		i;
	int		j;
	char	*table;

	i = 0;
	j = 0;
	table = (char *)malloc(sizeof(char) * (x *(y + 1)) + 1);
	if (y >= 0 && x >= 0)
	{
		if (y >= 0)
		{
			j += ft_writeline(x, j, '/', '*', '\\', table) + 1;
		}
		if (y > 1)
		{
			while (i < y - 2)
			{
				j += ft_writeline(x, j, '*', ' ', '*', table) + 1;
				i++;
			}
			ft_writeline(x, j, '\\', '*', '/', table);
		}
	}
	return (table);
}

char	*colle02(int x, int y)
{
	int		i;
	int		j;
	char	*table;

	i = 0;
	j = 0;
	table = (char *)malloc(sizeof(char) * (x *(y + 1)) + 1);
	if (y >= 0 && x >= 0)
	{
		if (y >= 0)
		{
			j += ft_writeline(x, j, 'A', 'B', 'A', table) + 1;
		}
		if (y > 1)
		{
			while (i < y - 2)
			{
				j += ft_writeline(x, j, 'B', ' ', 'B', table) + 1;
				i++;
			}
			ft_writeline(x, j, 'C', 'B', 'C', table);
		}
	}
	return (table);
}

char	*colle03(int x, int y)
{
	int		i;
	int		j;
	char	*table;

	i = 0;
	j = 0;
	table = (char *)malloc(sizeof(char) * (x *(y + 1)) + 1);
	if (y >= 0 && x >= 0)
	{
		if (y >= 0)
		{
			j += ft_writeline(x, j, 'A', 'B', 'C', table) + 1;
		}
		if (y > 1)
		{
			while (i < y - 2)
			{
				j += ft_writeline(x, j, 'B', ' ', 'B', table) + 1;
				i++;
			}
			ft_writeline(x, j, 'A', 'B', 'C', table);
		}
	}
	return (table);
}

char	*colle04(int x, int y)
{
	int		i;
	int		j;
	char	*table;

	i = 0;
	j = 0;
	table = (char *)malloc(sizeof(char) * (x *(y + 1)) + 1);
	if (y >= 0 && x >= 0)
	{
		if (y >= 0)
		{
			j += ft_writeline(x, j, 'A', 'B', 'C', table) + 1;
		}
		if (y > 1)
		{
			while (i < y - 2)
			{
				j += ft_writeline(x, j, 'B', ' ', 'B', table) + 1;
				i++;
			}
			ft_writeline(x, j, 'C', 'B', 'A', table);
		}
	}
	return (table);
}
