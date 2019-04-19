/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_integer_table.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrabby <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/13 16:31:09 by yrabby            #+#    #+#             */
/*   Updated: 2019/02/14 09:03:27 by yrabby           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_integer_table(int *tab, int size)
{
	int a;
	int b;
	int swap;

	a = 0;
	b = 1;
	while (a < (size - 1))
	{
		if (tab[a] > tab[b])
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
