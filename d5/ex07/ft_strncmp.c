/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrabby <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/16 16:44:06 by yrabby            #+#    #+#             */
/*   Updated: 2019/02/18 15:04:54 by yrabby           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int a;

	a = 0;
	while ((s1[a] || s2[a]) && (a < n))
	{
		if (s1[a] < s2[a])
			return (-1);
		if (s1[a] > s2[a])
			return (1);
		a++;
	}
	return (0);
}
