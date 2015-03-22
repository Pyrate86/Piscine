/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghilbert <ghilbert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/07/04 07:12:19 by ghilbert          #+#    #+#             */
/*   Updated: 2014/07/04 07:30:29 by ghilbert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_putchar.h"

void ft_print_numbers(void)
{
	int i;
	int ascii_number;

	i = 0;
	while (i < 10)
	{
		ascii_number = i + 48;
		ft_putchar(ascii_number);
		i++;
	}
}
