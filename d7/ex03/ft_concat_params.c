/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_params.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrabby <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/21 09:55:33 by yrabby            #+#    #+#             */
/*   Updated: 2019/02/27 15:29:26 by yrabby           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_mall(int argc, char **argv)
{
	int i;
	int n;
	int size;

	i = 1;
	n = 0;
	size = 0;
	while (i < argc)
	{
		while (argv[i][n])
			n++;
		size = size + n;
		n = 0;
		i++;
	}
	return (size);
}

char	*ft_concat_params(int argc, char **argv)
{
	int		argn;
	int		s;
	int		strn;
	char	*str;

	argn = 1;
	strn = 0;
	s = ft_mall(argc, argv);
	str = (char*)malloc(sizeof(*str) * (s + 1));
	s = 0;
	while (argn < argc)
	{
		while (argv[argn][s])
		{
			str[strn] = argv[argn][s];
			s++;
			strn++;
		}
		str[strn] = '\n';
		argn++;
		s = 0;
		strn++;
	}
	str[strn] = '\0';
	return (str);
}
