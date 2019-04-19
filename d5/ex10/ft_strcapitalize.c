/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrabby <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/17 08:31:41 by yrabby            #+#    #+#             */
/*   Updated: 2019/02/18 16:01:09 by yrabby           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	alf_num(char c)
{
	if ((c <= 'z' && c >= 'a') ||
		(c <= 'Z' && c >= 'A') ||
		(c <= '9' && c >= '0'))
		return (1);
	else
		return (0);
}

char	alf(char c)
{
	if (c <= 'z' && c >= 'a')
		return (1);
	else
		return (0);
}

char	*ft_strcapitalize(char *str)
{
	int n;
	int word;

	word = 0;
	n = 0;
	while (str[n])
	{
		if (str[n] >= 'A' && str[n] <= 'Z')
			str[n] = str[n] + 32;
		n++;
	}
	n = 0;
	while (str[n])
	{
		if (alf(str[n]) && word == 0)
			str[n] = str[n] - 32;
		if (!(alf_num(str[n])))
			word = 0;
		else
			word = 1;
		n++;
	}
	return (str);
}
