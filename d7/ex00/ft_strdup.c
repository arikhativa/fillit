/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrabby <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/24 16:16:44 by yrabby            #+#    #+#             */
/*   Updated: 2019/02/27 15:09:01 by yrabby           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int		n;
	char	*mstr;

	n = 0;
	while (src[n])
		n++;
	if (!(mstr = (char*)malloc(sizeof(*mstr) * (n + 1))))
		return (NULL);
	n = 0;
	while (src[n])
	{
		mstr[n] = src[n];
		n++;
	}
	mstr[n] = '\0';
	return (mstr);
}
