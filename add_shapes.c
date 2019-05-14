
#include "fillit.h"


#include <stdio.h>




int		check_empty(t_shape *elem, char **tab, int size, point p)
{
	int i;
	char **u;

	u = tab;
	i = 0;
	
	printf("x is %d, y is %d\n", elem->p[i].x, elem->p[i].y);
	printf("px is %d, py is %d\n", p.x, p.y);
	printf("size is %d\n", size);


	while (i < 4)
	{
		if (tab[(elem->p[i].y) + p.y][(elem->p[i].x) + p.x] != '.' || elem->p[i].y + p.y >= size || elem->p[i].x + p.x >= size)
			return (-1);
		i++;
	}
	return (1);
}

void		fillit(t_shape *elem, char **tab, point p, char c)
{
	int i;

	i = 0;
	while (i < 4)
	{
		tab[(elem->p[i].y) + p.y][(elem->p[i].x) + p.x] = c;
		i++;
	}
}

int		add_shape(t_shape *elem, char c, char **tab, int size, point p)
{
	int 	ok;
	point 	next;
	
printf("here\n");

	if (elem == NULL)
		return (1);
	next.x = p.x + 1;
	next.y = p.y + 1;
	ok = 0;
	while (tab[p.y] && ok != 1)
	{
		while (tab[p.x] && ok != 1)
		{
			if (check_empty(elem, tab, size, p))
			{
				fillit(elem, tab, p, c);
				ok = add_shape(elem->next, c + 1, tab, size, next);
			}
			p.x++;
		}
		p.y++;
	}
	return (0);
}
