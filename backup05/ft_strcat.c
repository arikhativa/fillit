/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrabby <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/17 11:30:07 by yrabby            #+#    #+#             */
/*   Updated: 2019/02/17 14:50:05 by yrabby           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *ft_strcat(char *dest, char *src)
{
	int n;
	int i;

	i = 0;
	n = 0;
	while (dest[n] != '\0')
		n++;
	while (src[i] != '\0')
	{
		dest[n] = src[i];
		n++;
		i++;
	}
	dest[n] = '\0';
	return (dest);
	/*if (dest[n] != '\0')
	{
		while (i != 0)
		{
			dest[n] = src[i];
			i--;
			n--;
		}
		return (0);
	}
	else
		return (&dest[0]);*/
}
