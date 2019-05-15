
#include "fillit.h"


#include <stdio.h>




int		check_empty(t_shape *elem, char **tab, int size, point p)
{
	int i;

	i = 0;
	while (i < 4)
	{
		if (elem->p[i].y + p.y >= (size) || elem->p[i].x + p.x >= (size) || tab[(elem->p[i].y) + p.y][(elem->p[i].x) + p.x] != '.')
			return (0);
		i++;
	}
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
	int 	ok;
	point	p;
	

	p.x = 0;
	p.y = 0;
	if (elem == NULL)
		return (1);
	ok = 0;
	while (p.y < (size) && ok != 1)
	{
		while (p.x < (size) && (ok != 1))
		{
			if (check_empty(elem, tab, size, p))
			{
				fillit(elem, tab, p, c);
				//print_tab(tab);
				ok = add_shape(elem->next, c + 1, tab, size);
				if (!(ok))
					fillit(elem, tab, p, '.');
			}
			p.x++;
		}
		p.x = 0;
		p.y++;
	}
	if (ok == 1)
		return (1);
	return (0);
}
