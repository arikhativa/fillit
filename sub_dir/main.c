/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrabby <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/30 15:39:49 by yrabby            #+#    #+#             */
/*   Updated: 2019/05/16 12:21:46 by yrabby           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

static void		print_tab(char **tab)
{
	int s;

	s = 0;
	while (tab[s] != NULL)
	{
		ft_putstr(tab[s]);
		ft_putchar('\n');
		s++;
	}
}

static void		extra_main(t_shape *start, int nbr)
{
	char	**tab;

	tab = make_square(nbr);
	while (!(add_shape(start, 'A', tab, nbr)))
	{
		nbr++;
		free(tab);
		tab = make_square(nbr);
	}
	print_tab(tab);
}

int			main(int ac, char **av)
{
	int		fd;
	t_shape	*start;
	int		nbr;

	nbr = 0;
	if (ac != 2)
		write(1, "usage - pls 1 arg\n", 19);
	else if ((fd = open(av[1], O_RDONLY)) != -1)
	{
		nbr = check_file(fd);
		close(fd);
		fd = open(av[1], O_RDONLY);
		start = make_list(fd);
		nbr = square_size(nbr);
		extra_main(start, nbr);
	}
	else
		write(1, "error\n", 6);
	return (0);
}
