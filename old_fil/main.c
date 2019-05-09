/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrabby <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/30 15:39:49 by yrabby            #+#    #+#             */
/*   Updated: 2019/05/06 10:46:53 by yrabby           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"
#include <stdio.h>

void	print_shape(int *shape)
{
	int i;

	i = 0;
	while (i < 18)
	{
		if (i >= 10)
			printf(" %d = %d | %d = %d\n", i, shape[i], i + 1, shape[i + 1]);
		else
			printf(" %d  = %d | %d  = %d\n", i, shape[i], i + 1, shape[i + 1]);
		i++;
		i++;
	}
	printf(" %d = %d\n\n", i, shape[i]);
}

int			main(int ac, char **av)
{
	int		fd;
	int 	shape[19];
	int 	nbr = 0;

	if (ac != 2)
	{
		write(1, "usage - pls 1 arg\n", 19);
	}
	else
	{
		zero_shape(shape);
		fd = open(av[1], O_RDONLY);
		nbr = count_shapes(fd, shape);
	}
	nbr = square_size(nbr);
	printf("%d\n", nbr);
	//print_shape(shape);
	return (0);
}
