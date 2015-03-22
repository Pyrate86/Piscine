/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sudoku_solver.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghilbert <ghilbert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/07/13 18:01:40 by ghilbert          #+#    #+#             */
/*   Updated: 2014/07/13 23:09:23 by ghilbert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sudoku_solver.h"

int		main(int argc, char **argv)
{
	int		i;
	int		j;
	char	grid[9][9];

	if (argc != 10)
		ft_putstr("Erreur\n");
	else
	{
		i = 1;
		while (i < argc)
		{
			j = 0;
			while (j < 9)
			{
				grid[i - 1][j] = argv[i][j];
				j++;
			}
			i++;
		}
		if (!ft_is_valid_grid(grid, 0) || !ft_solve_grid(grid, 0, 0))
			ft_putstr("Erreur\n");
		else
			ft_show_grid(grid, 9, 9);
	}
	return (0);
}
