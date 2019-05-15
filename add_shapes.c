
#include "fillit.h"


#include <stdio.h>




int		check_empty(t_shape *elem, char **tab, int size, point p)
{
	int i;

	i = 0;
	/*printf("size is %d\n\n", size);
	printf("elem x,y :\n");
	while (i < 4)
	{
		printf("%d,%d\n", elem->p[i].x, elem->p[i].y);
		i++;
	}
	printf("p is %d,%d\n", p.x, p.y);

	i = 0;*/
	while (i < 4)
	{
		if (tab[(elem->p[i].y) + p.y][(elem->p[i].x) + p.x] != '.' || elem->p[i].y + p.y > size || elem->p[i].x + p.x > size)
			return (0);
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

void		next_point(int size, point p, point *next)
{
	if (p.x < size)
		next->x = p.x + 1;
	else if (p.y < size)
		next->y = p.y + 1;
		next->x = 0;
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
	while (tab[p.y] && ok != 1)
	{
		while (tab[p.x] && (ok != 1))
		{
			if (check_empty(elem, tab, size, p))
			{
				fillit(elem, tab, p, c);
				//print_tab(tab);
				ok = add_shape(elem->next, c + 1, tab, size);
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
