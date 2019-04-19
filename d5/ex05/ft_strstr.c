/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrabby <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/16 11:26:18 by yrabby            #+#    #+#             */
/*   Updated: 2019/02/18 14:41:24 by yrabby           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int i;
	int z;
	int size;

	i = 0;
	z = 0;
	size = 0;
	while (to_find[size])
		size++;
	if (size == 0)
		return (str);
	while (str[i])
	{
		while (str[i + z] == to_find[z])
		{
			if (z == (size - 1))
				return (&str[i]);
			z++;
		}
		z = 0;
		i++;
	}
	return (0);
}
