/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrabby <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/20 08:50:37 by yrabby            #+#    #+#             */
/*   Updated: 2019/02/26 13:26:36 by yrabby           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int i;
	int *ari;

	i = 0;
	if (max <= min)
		return (NULL);
	ari = (int*)malloc(sizeof(*ari) * (max - min));
	while ((min + i) < max)
	{
		ari[i] = (min + i);
		i++;
	}
	return (ari);
}
