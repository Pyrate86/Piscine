/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghilbert <ghilbert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/07/10 19:00:01 by ghilbert          #+#    #+#             */
/*   Updated: 2014/07/10 23:09:57 by ghilbert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char		*ft_strstr(char *str, char *to_find)
{
	char	*ptr;
	int		i;
	int		c;

	if (to_find[0] == '\0')
		return (str);
	i = 0;
	c = 0;
	while (str[i] != '\0')
	{
		while (str[i] == to_find[c])
		{
			i++;
			c++;
		}
		if (to_find[c] == '\0')
			return (&str[i - c]);
		else
			c = 0;
		i++;
	}
	return (ptr);
}
