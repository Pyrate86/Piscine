/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_back.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghilbert <ghilbert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/07/17 06:06:46 by ghilbert          #+#    #+#             */
/*   Updated: 2014/07/17 09:39:17 by ghilbert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_list.h"

void	ft_list_push_back(t_list **begin_list, void *data)
{
	t_list	*t;
	int		i;

	i = 0;
	while (begin_list[i])
		i++;
	t = ft_create_elem(data);
	if (t)
	{
		begin_list[i]->next = t;
	}
}
