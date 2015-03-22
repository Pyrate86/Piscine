/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghilbert <ghilbert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/07/20 19:10:31 by ghilbert          #+#    #+#             */
/*   Updated: 2014/07/20 23:37:02 by ghilbert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include 	"colle_maker.h"
#include	"colle_reader.h"
#include	"compare.h"
#include	"output.h"

int		main()
{
	char	*input;
	int		width;
	int		height;
	int		result;

	input = ft_read();
	width = get_width(input);
	height = get_height(input);
	result = ft_compare(input, width, height);
	ft_put_result(result, width, height);
	return (0);
}
