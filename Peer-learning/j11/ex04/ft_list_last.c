/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_last.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghilbert <ghilbert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/07/17 10:29:06 by ghilbert          #+#    #+#             */
/*   Updated: 2014/07/17 10:44:58 by ghilbert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<stdlib.h>
#include	"ft_list.h"

t_list		*ft_list_last(t_list *begin_list)
{
	int i; 

	i = 0;
	while (begin_list->next)
		i++;
	return (&begin_list[i]);
}
