/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   count_shape.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrabby <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/04 12:12:04 by yrabby            #+#    #+#             */
/*   Updated: 2019/05/04 13:53:06 by yrabby           ###   ########.fr       */
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
		if (p[0].x - 1 >= 0 && p[1].x - 1 >= 0 &&
				p[2].x - 1 >= 0 && p[3].x - 1 >= 0)
		{
			p[0].x--;
			p[1].x--;
			p[2].x--;
			p[3].x--;
		}
		if (p[0].y - 1 >= 1 && p[1].y - 1 >= 1 &&
				p[2].y - 1 >= 1 && p[3].y - 1 >= 1)
		{
			p[0].y--;
			p[1].y--;
			p[2].y--;
			p[3].y--;
		}
		i++;
	}
}

static void		add_point(int *shape, int i, point *p, char *line)
{
	int			x;
	static int	a = 0;

	x = 0;
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
					if_exit();
				shape[a]++;
				a = 0;
			}
		}
		x++;
	}
}

void			count_shapes(int fd, int *shape)
{
	int		i;
	char	*line;
	point	p[4];

	i = 1;
	while (get_next_line(fd, &line) > 0)
	{
		while (i < 5)
		{
			check_line_len(line);
			check_bad_char(line);
			add_point(shape, i, p, line);
			i++;
			get_next_line(fd, &line);
		}
		i = 1;
	}
}
