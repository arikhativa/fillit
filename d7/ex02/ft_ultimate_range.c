/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrabby <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/20 11:12:29 by yrabby            #+#    #+#             */
/*   Updated: 2019/02/25 12:41:00 by yrabby           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_ultimate_range(int **range, int min, int max)
{
	int i;
	int *ari;
	int size;

	i = 0;
	if (max <= min)
	{
		*range = NULL;
		return (0);
	}
	size = (max - min);
	ari = (int*)malloc(sizeof(*ari) * size);
	while ((min + i) < max)
	{
		ari[i] = (min + i);
		i++;
	}
	*range = ari;
	return (size);
}
