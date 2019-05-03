/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrabby <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/04 11:53:54 by yrabby            #+#    #+#             */
/*   Updated: 2019/04/10 15:18:37 by yrabby           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *ptr, int n, size_t len)
{
	size_t	i;
	char	*p;

	p = ptr;
	i = 0;
	while (i < len)
	{
		p[i] = n;
		i++;
	}
	return (ptr);
}