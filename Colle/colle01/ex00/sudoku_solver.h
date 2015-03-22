/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sudoku_solver.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghilbert <ghilbert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/07/13 22:53:40 by ghilbert          #+#    #+#             */
/*   Updated: 2014/07/13 22:59:23 by ghilbert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	SUDOKU_SOLVER_H
# define	SUDOKU_SOLVER_H

void	ft_putstr(char *str);
void	ft_putchar(char c);
void	ft_show_grid(char grid[9][9], int x, int y);
int		ft_solve_grid(char grid[9][9], int x, int y);
int		ft_is_valid_grid(char grid[9][9], int position);

#endif
