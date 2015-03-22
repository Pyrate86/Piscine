/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghilbert <ghilbert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/07/10 16:40:38 by ghilbert          #+#    #+#             */
/*   Updated: 2014/07/10 23:38:33 by ghilbert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;
	int				boolean;

	i = 0;
	boolean = 0;
	while (dest[i] != '\0' && i < n)
	{
		if (boolean)
			dest[i] = '\0';
		else if (src[i] == '\0')
		{
			dest[i] = '\0';
			boolean = 1;
		}
		else
			dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
