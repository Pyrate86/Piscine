/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rot42.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghilbert <ghilbert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/07/18 01:44:14 by ghilbert          #+#    #+#             */
/*   Updated: 2014/07/18 16:08:38 by ghilbert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_rot42(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 'a' && str[i] <= 'j')
			|| (str[i] >= 'A' && str[i] <= 'J'))
			str[i] = str[i] + 16;
		else if ((str[i] > 'j' && str[i] <= 'z')
			|| (str[i] > 'J' && str[i] <= 'Z'))
			str[i] = str[i] - 10;
		else
			str[i] = str[i];
		i++;
	}
	return (str);
}
