/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   last.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrabby <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/27 16:07:49 by yrabby            #+#    #+#             */
/*   Updated: 2019/02/27 17:30:05 by yrabby           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int 	ft_is_space(char c)
{
	if (c == ' ' || c == '\n' || c == '\t')
		return (1);
	return (0);
}

void ft_add(char **mstr, char *str, int words)
{
	char *new;
	int s;
	int i;
	int n;

	i = 0;
	s = 0;
	n = 0;
	while (ft_is_space(str[n]))
		n++;
	while (str[n])
	{
		new[i] = str[n];
			printf("here\n");
		i++;
		n++;
		if (ft_is_space(str[n]))
		{
			while (ft_is_space(str[n]))
				n++;
			s++;
			i = 0;
		}
	}
	mstr[s][0] = 0;
}

char **ft_split_whitespaces(char *str)
{
	char **mstr;
	int n;
	int words;

	n = 0;
	if (!ft_is_space(str[n]))
		words = 1;
	else
		words = 0;
	while (str[n])
	{
		if (ft_is_space(str[n]))
		{
			while (ft_is_space(str[n]))
				n++;
			words++;
		}
		else 
			n++;
	}
	printf("%d\n", words);
	mstr = malloc(sizeof(char*) * (words + 1));
	n = 0;
	ft_add(mstr, str, words);
	return (mstr);
}
