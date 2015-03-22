/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghilbert <ghilbert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/07/09 21:26:59 by ghilbert          #+#    #+#             */
/*   Updated: 2014/07/09 22:13:01 by ghilbert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	int res;

	res = 1;
	if (nb > 1 && nb < 13)
	{
		res = nb * ft_recursive_factorial(nb - 1);
		return (res);
	}
	else
		return (1);
}
