/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrabby <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/16 11:41:14 by yrabby            #+#    #+#             */
/*   Updated: 2019/05/16 11:49:55 by yrabby           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

static point		add_point(int x, int y, point *max)
{
	point		p;

	p.x = x;
	p.y = y;
	if (max == NULL)
	{
		max->x = 0;
		max->y = 0;
	}
	if (max->x < p.x)
		max->x = p.x;
	if (max->y < p.y)
		max->y = p.y;
	return (p);
}

static void			lowest_p(point *p)
{
	int i;
	int a;

	a = -1;
	i = -1;
	while (i++ < 4)
	{
		if (p[0].x - 1 >= 0 && p[1].x - 1 >= 0
				&& p[2].x - 1 >= 0 && p[3].x - 1 >= 0
				&& p[4].x >= 0)
		{
			while (a++ < 5)
				p[a].x--;
			a = -1;
		}
		if (p[0].y - 1 >= 0 && p[1].y - 1 >= 0
				&& p[2].y - 1 >= 0 && p[3].y - 1 >= 0
				&& p[4].y >= 0)
		{
			while (a++ < 5)
				p[a].y--;
			a = -1;
		}
	}
}

static point		*make_point_arry(int fd, point loc)
{
	point	*p;
	int		n;
	char	*line;

	if ((get_next_line(fd, &line)) == 0)
		return (NULL);
	n = -1;
	if (!(p = (point*)malloc(sizeof(point) * 5)))
		return (NULL);
	while (loc.y < 4)
	{
		while (line[loc.x])
		{
			if (line[loc.x] == '#' && n++ < 6)
				p[n] = add_point(loc.x, loc.y, &p[4]);
			loc.x++;
		}
		loc.y++;
		loc.x = 0;
		get_next_line(fd, &line);
	}
	lowest_p(p);
	return (p);
}

static void			add_end(t_shape *start, point *p)
{
	t_shape *new;

	if (!(new = (t_shape*)malloc(sizeof(t_shape))))
		return ;
	new->p = p;
	new->next = NULL;
	while (start->next != NULL)
		start = start->next;
	start->next = new;
}

t_shape				*make_list(int fd)
{
	t_shape	*start;
	point	*p;
	point	loc;

	loc.x = 0;
	loc.y = 0;
	if (!(start = (t_shape*)malloc(sizeof(t_shape))))
		return (NULL);
	start->next = NULL;
	start->p = make_point_arry(fd, loc);
	while ((p = make_point_arry(fd, loc)) != NULL)
		add_end(start, p);
	return (start);
}
