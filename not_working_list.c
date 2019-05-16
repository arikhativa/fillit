
#include "fillit.h"

#include <stdio.h>

static point		add_point(int x, int y)
{
	point		p;

	p.x = x;
	p.y = y;
	return (p);
}

static void			lowest_p(point *p)
{
	int i;

	i = 0;
	while (i < 4)
	{
		if (p[0].x - 1 >= 0 && p[1].x - 1 >= 0
				&& p[2].x - 1 >= 0 && p[3].x - 1 >= 0)
		{
			p[0].x--;
			p[1].x--;
			p[2].x--;
			p[3].x--;
		}
		if (p[0].y - 1 >= 0 && p[1].y - 1 >= 0
				&& p[2].y - 1 >= 0 && p[3].y - 1 >= 0)
		{
			p[0].y--;
			p[1].y--;
			p[2].y--;
			p[3].y--;
		}
		i++;
	}
}

static point		*make_point_arry(int fd)
{
	point *p;
	int y;
	int n;
	int x;
	char	*line;

	y = 0;
	x = 0;
	n = 0;
	if (!(p = (point*)malloc(sizeof(point) * 4)))
		return (NULL);

	if ((get_next_line(fd, &line)) == 0)
		return (NULL);
	while (y < 4)
	{
		while (line[x])
		{
			if (line[x] == '#')
			{
				p[n] = add_point(x, y);
				n++;
			}
			x++;
		}
		y++;
		x = 0;
		get_next_line(fd, &line);
	}
	lowest_p(p);
	return (p);
}

static point	max_point(point *p)
{
	point	max;
	int 	i;

	i = 1;
	max.x = p[0].x;
	max.y = p[0].y;
	while (i < 4)
	{
		if (max.x < p[i].x)
			max.x = p[i].x;
		if (max.y < p[i].y)
			max.y = p[i].y;
		i++;
	}
	return (max);
}

static void			add_end(t_shape *start, point *p)
{
	t_shape *new;

	if (!(new = (t_shape*)malloc(sizeof(t_shape))))
		return ;
	new->p = p;
	new->max = max_point(new->p);
	new->next = NULL;
	while (start->next != NULL)
		start = start->next;
	start->next = new;
}

t_shape		*make_list(int fd)
{
	t_shape *start;
	point *p;

	if (!(start = (t_shape*)malloc(sizeof(t_shape))))
		return (NULL);
	start->next = NULL;
	start->p = make_point_arry(fd);
	start->max = max_point(start->p);
	while ((p = make_point_arry(fd)) != NULL)
		add_end(start, p);
	return (start);
}