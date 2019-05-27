/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_file.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrabby <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/04 12:46:40 by yrabby            #+#    #+#             */
/*   Updated: 2019/05/16 15:04:10 by yrabby           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

#include <stdio.h>






static void		if_exit(void)
{
	write(1, "error\n", 6);
	exit(EXIT_FAILURE);
}

static void		check_new_line(char *line)
{
	if (line[0] != '\0')
		if_exit();
}

int		is_conected(point *p, char **tab)
{
	if (p->x - 1 >= 0)
	{
		if (tab[p->y][p->x - 1] == '#')
			return (1);
	}
	if (p->x + 1 <= 3)
	{
		if (tab[p->y][p->x + 1] == '#')
			return (1);
	}
	if (p->y - 1 >= 0)
	{
		if (tab[p->y - 1][p->x] == '#')
			return (1);
	}
	if (p->y + 1 <= 3)
	{
		if (tab[p->y + 1][p->x] == '#')
			return (1);
	}
	return (0);
}

void		check_good_shape(char **tab)
{
	int		hash;
	point 	p;
	
	char **del;
	del = tab;

	hash = 0;
	p.y = 0;
	p.x = 0;
	while (p.y < 4)
	{
		//printf("%d\n", p.y);
		while (p.x < 4)
		{
			//printf("%d", p.x);
			//pirintf("%c", tab[p.y][p.x]);
			if (tab[p.y][p.x] == '#')
			{
				hash++;
				if ((is_conected(&p, tab) == 0))
					if_exit();
			}
			p.x++;
		}
		//printf("\n");
		p.x = 0;
		p.y++;
	}
	//printf("hash = %d\n", hash);
	if (hash != 4)
		if_exit();
}

void		fill_tab(char *line, char **tab)
{
	static int y = 0;
	int x;

	x = 0;
	while (tab[y][x])
	{
		tab[y][x] = line[x];
		x++;
	}
	y = (y == 3) ? 0 : (y + 1);
}

static void		check_bad_char(char *line)
{
	int len;

	len = ft_strlen(line);
	if (len != 4)
		if_exit();
	len = 0;
	while (line[len])
	{
		if (line[len] != '#' && line[len] != '.')
			if_exit();
		len++;
	}
}

int				check_file(int fd)
{
	char	*line;
	int		ok;
	int		i;
	int		count;
	char	**tab;

	i = 0;
	count = 0;
	while ((ok = get_next_line(fd, &line)) > 0)
	{
		tab = make_square(4);
		while (i < 4)
		{
			check_bad_char(line);
			fill_tab(line, tab);
			free(line);
			ok = get_next_line(fd, &line);
			count++;
			i++;
		}
		check_good_shape(tab);
		//print_tab(tab);
		free(tab);
		i = 0;
		if (ok > 0)
			check_new_line(line);
	}
	free(line);
	return (count);
}
