/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrabby <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/30 15:39:49 by yrabby            #+#    #+#             */
/*   Updated: 2019/05/14 15:12:46 by yrabby           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"



#include <stdio.h>


int			main(int ac, char **av)
{
	int		fd;
	t_shape	*start;
	int 	nbr = 0;

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


		nbr = 0;
		while (start != NULL)
		{
			while (nbr < 4)
			{
				printf("%d,%d\n", start->p[nbr].x, start->p[nbr].y);
				nbr++;
			}
			printf("\n");
			nbr = 0;
			start = start->next;
		}
	}
	return (0);
}
