
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
		if (elem->p[i].y + p.y > (size - 1) || elem->p[i].x + p.x > (size - 1) || tab[(elem->p[i].y) + p.y][(elem->p[i].x) + p.x] != '.')
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

int		add_shape(t_shape *elem, char c, char **tab, int size)
{
	int 	ok;
	point	p;
	

	p.x = 0;
	p.y = 0;
	if (elem == NULL)
		return (1);
	ok = 0;
	while (p.y < (size - 1) && ok != 1)
	{
		while (p.x < (size - 1) && (ok != 1))
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
