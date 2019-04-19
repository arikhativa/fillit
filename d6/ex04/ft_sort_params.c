/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrabby <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/19 12:56:28 by yrabby            #+#    #+#             */
/*   Updated: 2019/02/19 17:38:15 by yrabby           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
}

int		ft_is_taba_big(char *taba, char *tabb)
{
	int a;

	a = 0;
	while (taba[a] || tabb[a])
	{
		if (taba[a] < tabb[a])
			return (0);
		if (taba[a] > tabb[a])
			return (1);
		a++;
	}
	return (0);
}

void	ft_sort_integer_table(char **tab, int size)
{
	int		a;
	int		b;
	char	*swap;

	a = 1;
	b = 2;
	while (a < (size - 1))
	{
		if (ft_is_taba_big(tab[a], tab[b]))
		{
			swap = tab[a];
			tab[a] = tab[b];
			tab[b] = swap;
			b = a + 1;
		}
		if (b == size - 1)
		{
			a++;
			b = a + 1;
		}
		else
			b++;
	}
}

int		main(int argc, char **argv)
{
	int i;

	i = 1;
	ft_sort_integer_table(argv, argc);
	while (argv[i])
	{
		ft_putstr(argv[i]);
		ft_putchar('\n');
		i++;
	}
	return (0);
}
