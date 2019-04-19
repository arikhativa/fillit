/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrabby <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/21 12:42:41 by yrabby            #+#    #+#             */
/*   Updated: 2019/02/23 13:39:33 by yrabby           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
//
//
//
//

int		ft_word_count(char *str)
{
	int word;
	int n;

	n = 0;
	word = 0;

	while (str[n])
	{
		while (str[n] == ' ' || str[n] == '\t' || str[n] == '\n')
		{
			n++;
		}
		while (str[n] != ' ' && str[n] != '\t' && str[n] != '\n' && str[n] != '\0')
		{
			n++;
		}
		word++;
	}
	return (word);
}

////////////////

int		ft_word_malloc(char **mstr, char *str, int s, int ltr)
{
	int n;

	while (str[n] == ' ' && str[n] == '\t' && str[n] == '\n')
		ltr++;
	n = ltr;
	while (str[ltr] != ' ' && str[ltr] != '\t' && str[ltr] != '\n' && str[ltr])
		ltr++;
	mstr[s] = (char*)malloc(sizeof(*mstr[s]) * (ltr - n + 1));
	ltr = n;
	n = 0;
	while (str[ltr] != ' ' && str[ltr] != '\t' && str[ltr] != '\n' && str[ltr])
	{
		mstr[s][n] = str[ltr];
		ltr++;
		n++;
		printf("1	 %d\n", ltr);
	}
	mstr[s][n] = '\0';
	printf("2	 %s\n", mstr[0]);
	return (ltr);
}

char	**ft_split_whitespaces(char *str)
{
	int word;
	int s;
	int ltr;
	char **mstr;

	printf("here");
	s = 0;
	ltr = 0;
	word = ft_word_count(str);	
	mstr = (char**)malloc(sizeof(**mstr) * (word + 1));
	while (str[ltr] != '\0')
	{
		ltr = ft_word_malloc(mstr, str, s, ltr);
		//printf("1 %c\n", str[ltr]);
		s++;
	}
	//printf("here\n");
	//mstr[s] = 0 ;
	return (mstr);
}
