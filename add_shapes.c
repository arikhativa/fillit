
#include "fillit.h"


#include <stdio.h>




int		check_empty(t_shape *elem, char **tab, int size, point p)
{
	if (elem->p[4].y + p.y >= (size) || elem->p[4].x + p.x >= (size))
		return (0);	
	if (tab[(elem->p[0].y) + p.y][(elem->p[0].x) + p.x] != '.')
		return (0);
	if (tab[(elem->p[1].y) + p.y][(elem->p[1].x) + p.x] != '.')
		return (0);
	if (tab[(elem->p[2].y) + p.y][(elem->p[2].x) + p.x] != '.')
		return (0);
	if (tab[(elem->p[3].y) + p.y][(elem->p[3].x) + p.x] != '.')
		return (0);
	return (1);
}

void		fillit(t_shape *elem, char **tab, point p, char c)
{
	tab[(elem->p[0].y) + p.y][(elem->p[0].x) + p.x] = c;
	tab[(elem->p[1].y) + p.y][(elem->p[1].x) + p.x] = c;
	tab[(elem->p[2].y) + p.y][(elem->p[2].x) + p.x] = c;
	tab[(elem->p[3].y) + p.y][(elem->p[3].x) + p.x] = c;
}

int		add_shape(t_shape *elem, char c, char **tab, int size)
{
	point	p;

	if (elem == NULL)
		return (1);
	p.x = 0;
	p.y = 0;
	while (p.y < (size))
	{
		while (p.x < (size))
		{
			if (check_empty(elem, tab, size, p))
			{
				fillit(elem, tab, p, c);
				//print_tab(tab);
				if ((add_shape(elem->next, c + 1, tab, size)))
					return (1);
				else
					fillit(elem, tab, p, '.');
			}
			p.x++;
		}
		p.x = 0;
		p.y++;
	}
	return (0);
}
