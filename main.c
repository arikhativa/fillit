/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrabby <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/30 15:39:49 by yrabby            #+#    #+#             */
/*   Updated: 2019/05/16 10:35:26 by yrabby           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"



#include <stdio.h>


void	print_tab(char **tab)
{
	int s = 0;

	while (tab[s] != NULL)
	{
		printf("%s\n", tab[s]);
		s++;
	}
}

void	print_list(t_shape *start)
{
	int nbr = 0;

	while (start != NULL)
	{
		while (nbr < 5)
		{
			printf("%d,%d\n", start->p[nbr].x, start->p[nbr].y);
			nbr++;
		}
		printf("\n");
		nbr = 0;
		start = start->next;
	}
}



int			main(int ac, char **av)
{
	int		fd;
	t_shape	*start;
	char 	**tab;
	int 	nbr = 0;
	point	p;

	int i = 0;

	p.x = 0;
	p.y = 0;
	if (ac != 2)
	{
		write(1, "usage - pls 1 arg\n", 19);
	}
	else
	{
		if ((fd = open(av[1], O_RDONLY)) == -1)
		{
			write(1, "bad file\n", 9);
			return (0);
		}
		nbr = check_file(fd);
		close(fd);

		fd = open(av[1], O_RDONLY);
		start = make_list(fd);
		nbr = square_size(nbr);

		tab = make_square(nbr);
		while (!(add_shape(start, 'A', tab, nbr)))
		{
			i++;
			nbr++;
			free(tab);
			tab = make_square(nbr);
		}
		//print_list(start);
		print_tab(tab);
	}
	return (0);
}
