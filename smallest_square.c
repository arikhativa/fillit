/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   smallest_square.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrabby <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/06 10:31:01 by yrabby            #+#    #+#             */
/*   Updated: 2019/05/09 16:21:36 by yrabby           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

static int	sqrt(int nbr)
{
	int i;

	i = 2;
	while (i * i <= nbr)
	{
		if (i * i == nbr)
			return (i);
		i++;
	}
	return (-i);
}

int			square_size(int nbr)
{
	int size;

	size = sqrt(nbr * 4);
	return (size);
}
