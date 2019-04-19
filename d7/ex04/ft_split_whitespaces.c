/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrabby <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/25 13:59:13 by yrabby            #+#    #+#             */
/*   Updated: 2019/02/27 16:04:57 by yrabby           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

char	*ft_strncpy(char *dest, char *src, int n, int *ptrl)
{
	int a;

	a = 0;
	while (a < n && src[*ptrl] != '\0')
	{
		dest[a] = src[*ptrl];
		a++;
		*ptrl = *ptrl + 1;
	}
	while (a < n)
	{
		dest[a] = '\0';
		a++;
	}
	return (dest);
}

int		ft_stop(char *str, char *stop, int *ptrl)
{
	int i;

	i = 0;
	while (stop[i])
	{
		if (str[*ptrl] == stop[i])
			return (1);
		i++;
	}
	return (0);
}

int		ft_count_word(char *str, char *stop, int *ptrl)
{
	int word;

	word = 0;
	while (str[*ptrl])
	{
		if (ft_stop(str, stop, ptrl))
		{
			word++;
		}
		*ptrl = *ptrl + 1;
	}
	word++;
	return (word);
}


char **ft_split_whitespaces(char *str)
{
	char stop[4] = {' ','\t', '\n', '\0'};
	char **mstr;
	int *ptrl;
	int ltr;
	int word;
	int s;

	s = 0;
	ltr = 0;
	ptrl = &ltr;
	word = ft_count_word(str, stop, ptrl); 
	*mstr = (char*)malloc(sizeof(char) * (word + 1));
	ltr = 0;
	/*
	while (str[ltr])
	{
		word = ft_word_size(str, stop, ptrl);
		if (word > 0)
		{
			mstr[s] = (char*)malloc(sizeof(**mstr) * (word + 1));
			ft_strncpy(mstr[s], str, word, ptrl);
			*(mstr[s] + word) = '\0';
			ltr = ltr + word;
			s++;
		}
		else
		ltr++;
	}*/
	mstr[s] = 0;
	return (mstr);
}
