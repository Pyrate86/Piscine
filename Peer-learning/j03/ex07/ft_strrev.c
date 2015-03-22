/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghilbert <ghilbert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/07/08 19:55:26 by ghilbert          #+#    #+#             */
/*   Updated: 2014/07/08 23:00:59 by ghilbert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrev(char *str)
{
	int last;
	int first;
	int i;
	char tmp;

	i = 0;	
	while (str[i] != '\0' )
		i++;
	first = 0;
	last = i - 1;
	while (first < last)
	{
		tmp = str[first];
		str[first] = str[last];
		str[last] = tmp;
		first++;
		last--;
	}

	 return (str);
}
