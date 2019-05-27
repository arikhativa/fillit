/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_file.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrabby <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/04 12:46:40 by yrabby            #+#    #+#             */
/*   Updated: 2019/05/16 12:23:16 by yrabby           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"
#include <stdio.h>

void		if_exit(char *str)
{
	write(1, "error\n", 6);
	printf("%s\n", str);
	exit(EXIT_FAILURE);
}

int		check_new_line(char *line)
{
	if (line[0] != '\0')
		if_exit("new line");
	return (0);
}

void		check_line_len(char *line)
{
	int len;


	len = ft_strlen(line);
	if (len != 4)
		if_exit("line len");
}

void		check_bad_char(char *line)
{
	int i;

	i = 0;
	while (line[i] && line[i] != '\n')
	{
		if (i != 4 && line[i] == '\n')
			if_exit("new line bad place");
		if (line[i] != '#' && line[i] != '.')
			if_exit("bad char");
		i++;
	}
}

void		check_good_shape(char *shape)
{
	int i;
	int ok;

	i = -1;
	ok = 0;
	while (shape[++i])
	{
		if (shape[i] == '#')
		{
			if ((i > 0) && (i % 4 != 0))
				if (shape[i - 1] == '#')
					ok = 1;
			if ((i < 15) && ((i + 1) % 4 != 0))
				if (shape[i + 1] == '#')
					ok = 1;
			if ((i - 4) > 0)
				if (shape[i - 4] == '#')
					ok = 1;
			if ((i + 4) < 15)
				if (shape[i + 4] == '#')
					ok = 1;
			if (ok != 1)
				if_exit("bad_shape");
		}
		ok = 0;
	}
}

void		make_shape(char *line)
{
	static char	*shape;
	char		*tmp;

	if (shape == NULL)
	{
		if(!(shape = ft_strnew(1)))
			if_exit("make_shpe");
	}
	if (!(tmp = ft_strjoin(shape, line)))
		if_exit("make_shape2");
	ft_strdel(&shape);
	shape = tmp;
	if (ft_strlen(shape) == 16)
	{
		check_good_shape(shape);
		ft_strdel(&shape);
	}
}



int				check_file(int fd)
{
	char	*line;
	int	ok;
	int	i;
	int	count;

	i = 0;
	count = 0;
	while ((ok = get_next_line(fd, &line)) > 0)
	{
		while (i++ < 4)
		{
			//printf("out - %s\n", line);
			check_line_len(line);
			check_bad_char(line);
			make_shape(line);
			ft_strdel(&line);
			ok = get_next_line(fd, &line);
			count++;
		}
		if (ok != 0)
			i = check_new_line(line);
		ft_strdel(&line);
	}
	if (i == 0)
		if_exit("i = 0");
	return (count);
}
