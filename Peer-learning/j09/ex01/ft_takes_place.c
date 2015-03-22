/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_takes_place.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghilbert <ghilbert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/07/17 19:15:21 by ghilbert          #+#    #+#             */
/*   Updated: 2014/07/18 15:34:58 by ghilbert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_takes_place(int hour)
{
	char	*str;

	str = "THE FOLLOWING TAKES PLACE BETWEEN";
	if (hour < 0 || hour > 23)
		printf("L'heure doit etre comprise entre 0 et 23...\n");
	else if (hour == 0)
		printf("%s 12.00 A.M. AND 1.00 A.M.\n", str);
	else if (hour == 12)
		printf("%s 12.00 P.M. AND 1.00 P.M.\n", str);
	else if (hour == 11)
		printf("%s 11.00 A.M. AND 12.00 P.M.\n", str);
	else if (hour == 23)
		printf("%s 11.00 P.M. AND 12.00 A.M.\n", str);
	else if (hour < 11)
		printf("%s %d.00 A.M. AND %d.00 A.M.\n", str, hour, hour + 1);
	else
		printf("%s %d.00 P.M. AND %d.00 P.M.\n", str, hour - 12, hour - 11);
}
