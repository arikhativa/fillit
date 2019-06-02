/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrabby <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/30 15:39:49 by yrabby            #+#    #+#             */
/*   Updated: 2019/05/16 14:33:58 by yrabby           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"
#include <stdio.h>

void		print_tab(char **tab)
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

// code for printing the list
/*
   void	print_list(t_shape *start)
   {
   int nbr = 0;

   while (start != NULL)
   {
   while (nbr < 4)
   {
   printf("%d,%d\n", start->p[nbr].x, start->p[nbr].y);
   nbr++;
   }
   printf("max:\n");
   printf("%d,%d\n", start->p[4].x, start->p[4].y);
   printf("\n");
   nbr = 0;
   start = start->next;
   }
   }*/

int	main(int ac, char **av)
{
	int		fd;
	t_shape		*start;
	int		nbr;
	char		**tab;

	nbr = 0;
	if (ac != 2)
		write(1, "usage - run with one argument\n", 30);
	else if ((fd = open(av[1], O_RDONLY)) != -1)
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
			ft_strdel(tab);
			tab = make_square(nbr);
		}
		print_tab(tab);

	}
	else
		write(1, "bad file\n", 9);
	return (0);
}
