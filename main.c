/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrabby <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/30 15:39:49 by yrabby            #+#    #+#             */
/*   Updated: 2019/05/16 11:59:58 by yrabby           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void	print_tab(char **tab)
{
	int s = 0;

	while (tab[s] != NULL)
	{
		ft_putstr(tab[s]);
		ft_putchar('\n');
		s++;
	}
}

int			main(int ac, char **av)
{
	int		fd;
	/*t_shape	*start;
	char 	**tab;
	int 	nbr;
	point	p;*/

	fd = ac;
	if ((fd = open(av[1], O_RDONLY)) == -1)
		{
			write(1, "bad file\n", 9);
			return (0);
		}

	/*p.x = 0;
	p.y = 0;
	nbr = 0;
	if (ac != 2)
	{
		write(1, "usage - pls 1 arg\n", 19);
	}
	else
	{
				nbr = check_file(fd);
		close(fd);

		fd = open(av[1], O_RDONLY);
		start = make_list(fd);
		nbr = square_size(nbr);

		tab = make_square(nbr);
		while (!(add_shape(start, 'A', tab, nbr)))
		{
			nbr++;
			free(tab);
			tab = make_square(nbr);
		}
		print_tab(tab);
	}*/
	return (0);
}
