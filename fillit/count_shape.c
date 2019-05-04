/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   count_shape.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrabby <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/04 12:12:04 by yrabby            #+#    #+#             */
/*   Updated: 2019/05/04 12:13:50 by yrabby           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void			zero_shape(int *shape)
{
	int i;

	i = 0;
	while (i < 19)
	{
		shape[i] = 0;
		i++;
	}
}

static void		top_left(point *p)
{
	int i;

	i = 0;
	while (i < 4)
	{
		if (p[0].x - 1 >= 0 && p[1].x - 1 >= 0 && p[2].x - 1 >= 0 && p[3].x - 1 >= 0)
		{
			p[0].x--;
			p[1].x--;
			p[2].x--;
			p[3].x--;
		}
		if (p[0].y - 1 >= 1 && p[1].y - 1 >= 1 && p[2].y - 1 >= 1 && p[3].y - 1 >= 1)
		{
			p[0].y--;
			p[1].y--;
			p[2].y--;
			p[3].y--;
		}
		i++;
	}
}

int				count_shapes(int fd, int *shape)
{
	int		i;
	int		x;
	int		a;
	point	p[4];
	char	*line;

	a = 0;
	i = 1;
	x = 0;
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
						top_left(p);
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
		i = 1;
	}
	return (1);
}
