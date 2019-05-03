/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrabby <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/30 15:39:49 by yrabby            #+#    #+#             */
/*   Updated: 2019/05/03 19:14:08 by yrabby           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"



int		main(int ac, char **av)
{
	int		fd;
	int 	*shape[19];
	int 	i;
	char	*line;

	i = 0;
	while (i < 19)
	{
		shape[i] = 0;
		i++;
	}
	if (ac != 2)
	{
		write(1, "usage - pls 1 arg\n", 19);
	}
	else
	{
		fd = open(av[1], O_RDONLY);

	}
	return (0);
}
