/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   smallest_square.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrabby <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/06 10:31:01 by yrabby            #+#    #+#             */
/*   Updated: 2019/05/14 15:44:47 by yrabby           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

static int	sqrt(int nbr)
{
	int i;

	i = 2;
	while (i * i < nbr)
		i++;
	return (i);
}

int			square_size(int nbr)
{
	int size;

	size = sqrt(nbr);
	return (size);
}

static char	*make_line(int size)
{
	char *line;
	int n;

	n = 0;
	if (!(line = (char*)malloc(sizeof(char) * (size + 1))))
		return (NULL);
	line[size] = '\0';
	while (n < size)
	{
		line[n] = '.';
		n++;
	}
	return (line);
}

char	 	**make_square(int size)
{
	char **tab;
	int n;

	n = 0;
	if (!(tab = (char**)malloc(sizeof(char*) * (size + 1))))
		return (NULL);
	tab[size] = NULL;
	while (n < size)
	{
		tab[n] = make_line(size);
		n++;
	}
	return (tab);
}
