/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrabby <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/30 15:39:49 by yrabby            #+#    #+#             */
/*   Updated: 2019/05/03 19:39:48 by yrabby           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"
#include <stdio.h>


int		main(int ac, char **av)
{
	int		fd;
	int 	shape[19];
	int 	i;
	int		x;
	int		a;
	char	*line;
	point	p[4];

	x = 0;
	a = 0;
	i = 0;
	while (i < 19)
	{
		shape[i] = 0;
		i++;
	}
	i = 1;
	if (ac != 2)
	{
		write(1, "usage - pls 1 arg\n", 19);
	}
	else
	{
		fd = open(av[1], O_RDONLY);
		while (get_next_line(fd, &line) > 0)
		{
			while (i < 5)
			{
				while (x < 4)
				{
					if (line[x] == '#')
					{
						p[a].x = x;
						p[a].y = i;
						a++;
						if (a == 4)
						{
							a = shape_id(p[0], p[1], p[2], p[3]);
							if (a == -1)
								return (0);
							shape[a]++;
							a = 0;
						}
					}
					x++;
				}
				x = 0;
				i++;
				get_next_line(fd, &line);
			}
			i = 0;
		}
	}
	i = 0;
	while (i < 19)
	{
		printf("%d = %d\n", i, shape[i]);
		i++;
	}
	return (0);
}
