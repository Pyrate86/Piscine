/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solve.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghilbert <ghilbert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/07/13 18:54:44 by ghilbert          #+#    #+#             */
/*   Updated: 2014/07/13 23:00:37 by ghilbert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		is_in_line(int nb, int line, char grid[9][9])
{
	int	i;

	i = 0;
	while (i < 9)
	{
		if (grid[line][i] == nb + 48)
			return (1);
		i++;
	}
	return (0);
}

int		is_in_row(int nb, int row, char grid[9][9])
{
	int i;

	i = 0;
	while (i < 9)
	{
		if (grid[i][row] == nb + 48)
			return (1);
		i++;
	}
	return (0);
}

int		is_in_block(int nb, int line, int row, char grid[9][9])
{
	int i;
	int j;
	int max_i;
	int max_j;

	i = line - (line % 3);
	max_i = i + 3;
	while (i < max_i)
	{
		j = row - (row % 3);
		max_j = j + 3;
		while (j < max_j)
		{
			if (grid[i][j] == nb + 48)
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}

int		ft_is_valid_grid(char grid[9][9], int position)
{
	int x;
	int y;
	int i;

	if (position >= 81)
		return (1);
	x = position / 9;
	y = position % 9;
	if (grid[x][y] == '.')
		return (ft_is_valid_grid(grid, position + 1));
	i = 1;
	while (i <= 9)
	{
		if (is_in_line(i, x, grid) == 0
				&& is_in_row(i, y, grid) == 0
				&& is_in_block(i, x, y, grid) == 0)
		{
			if (ft_is_valid_grid(grid, position + 1))
				return (1);
		}
		i++;
	}
	return (0);
}

int		ft_solve_grid(char grid[9][9], int position)
{
	int x;
	int y;
	int i;

	if (position >= 81)
		return (1);
	x = position / 9;
	y = position % 9;
	if (grid[x][y] != '.')
		return (ft_solve_grid(grid, position + 1));
	i = 1;
	while (i <= 9)
	{
		if (is_in_line(i, x, grid) == 0
				&& is_in_row(i, y, grid) == 0
				&& is_in_block(i, x, y, grid) == 0)
		{
			grid[x][y] = i + 48;
			if (ft_solve_grid(grid, position + 1))
				return (1);
		}
		i++;
	}
	grid[x][y] = '.';
	return (0);
}
