/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adacher <adacher@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/07/05 17:55:33 by adacher           #+#    #+#             */
/*   Updated: 2014/07/19 22:32:28 by mtorsell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
void	colle(int x, int y);
void	ft_putchar(char c);
int		ft_atoi(char *str);

int		main(int argc, char **argv)
{
	int	width;
	int	lenght;

	lenght = ft_atoi(argv[2]);
	width = ft_atoi(argv[1]);
	if (argc != 3)
		write (1, "Wrong number of arguments\n", 26);
	colle(width, lenght);
	return (0);
}
