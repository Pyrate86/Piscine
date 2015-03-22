/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghilbert <ghilbert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/07/11 04:02:13 by ghilbert          #+#    #+#             */
/*   Updated: 2014/07/11 22:55:31 by ghilbert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		main(int argc, char **argv)
{
	int i;

	i = (argc > 1 ? 0 : 0);
	while (argv[0][i] != '\0')
	{
		ft_putchar (argv[0][i]);
		i++;
	}
	ft_putchar('\n');
	return (0);
}
