/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghilbert <ghilbert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/07/08 12:53:07 by ghilbert          #+#    #+#             */

/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

//void ft_ft(int *nbr);
//void ft_ultimate_ft(int *********nbr);
//void ft_div_mod(int a, int b, int *div, int *mod);
//void ft_ultimate_div_mod(int *a, int *b);
//void ft_putstr(char *str);
int ft_strlen(char *str);
//void ft_swap(int *a, int *b);
//char *ft_strrev(char *str);

void ft_putchar(char c)
{
	write(1, &c, 1);
}

int		main(void)
{
	char *str = "#Hype";
	int l;

	l = ft_strlen(str);

	printf("%s count %d characters", str, l);

	return (0);
}
