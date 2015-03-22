/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbarbari <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/07/17 02:33:22 by mbarbari          #+#    #+#             */
/*   Updated: 2014/07/17 07:17:16 by mbarbari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_list.h"

void	lecture_t_list(t_list *list)
{
	while (list->next != NULL)
	{
		printf("%s\n", list->data);
		list = list->next;
	}
}

int		main()
{
		t_list *unelistechainee;
		unelistechainee = (t_list *)malloc(sizeof(t_list));
		unelistechainee->next = ft_create_elem("un test");
		ft_list_push_back(&unelistechainee, "un autre test");
		lecture_t_list(unelistechainee);
}
