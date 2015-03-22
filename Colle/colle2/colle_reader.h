/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   colle_reader.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghilbert <ghilbert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/07/20 20:04:04 by ghilbert          #+#    #+#             */
/*   Updated: 2014/07/20 23:24:21 by ghilbert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef		COLLE_READER_H
# define	COLLE_READER_H

#include <stdlib.h>
#include <unistd.h>

int		get_width(char *str);
int		get_height(char *str);
char    *ft_read(void);

#endif
