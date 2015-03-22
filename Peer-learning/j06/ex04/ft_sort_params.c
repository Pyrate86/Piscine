/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghilbert <ghilbert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/07/11 06:44:24 by ghilbert          #+#    #+#             */
/*   Updated: 2014/07/11 07:06:01 by ghilbert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}

int		ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] != '\0')
	{
		if (s1[i] > s2[i])
			return (1);
		else if (s1[i] < s2[i])
			return (-1);
		else
			i++;
	}
	return (0);
}

void	bubblesort(int length, char **sortable)
{
	char	*swap;
	int		boolean;
	int		i;

	while (!boolean)
	{
		boolean = 1;
		i = 1;
		while (i < length - 1)
		{
			if (ft_strcmp(sortable[i], sortable[i + 1]) > 0)
			{
				swap = sortable[i];
				sortable[i] = sortable[i + 1];
				sortable[i + 1] = swap;
				boolean = 0;
			}
			i++;
		}
	}
}

int		main(int argc, char **argv)
{
	int i;

	bubblesort (argc, argv);
	i = 1;
	while (i < argc)
	{
		ft_putstr(argv[i]);
		ft_putchar('\n');
		i++;
	}
	return (0);
}
