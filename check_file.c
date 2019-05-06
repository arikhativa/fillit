/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_file.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrabby <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/04 12:46:40 by yrabby            #+#    #+#             */
/*   Updated: 2019/05/06 10:01:00 by yrabby           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void	check_new_line(char *line)
{
	if (line[0] != '\0')
		if_exit();
}

void	check_line_len(char *line)
{
	int len;

	len = ft_strlen(line);
	if (len != 4)
		if_exit();
}

void	check_bad_char(char *line)
{
	int i;

	i = 0;
	while (line[i] && line[i] != '\n')
	{
		if (i != 4 && line[i] == '\n')
			if_exit();
		if (line[i] != '#' && line[i] != '.')
			if_exit();
		i++;
	}
}

void	if_exit(void)
{
	write(1, "error\n", 6);
	exit(EXIT_FAILURE);
}