/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_front.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghilbert <ghilbert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/07/17 09:07:30 by ghilbert          #+#    #+#             */
/*   Updated: 2014/07/17 10:49:05 by ghilbert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<stdlib.h>
#include	"ft_list.h"

void	ft_list_push_front(t_list **begin_list, void *data)
{
	t_list	*t;

	t = ft_create_elem(data);
	if (t)
	{
		t->next = begin_list[0]->next;
		begin_list[0]->next = t;
	}
}
