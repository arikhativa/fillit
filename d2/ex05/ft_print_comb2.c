/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrabby <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/13 09:22:24 by yrabby            #+#    #+#             */
/*   Updated: 2019/02/26 14:06:56 by yrabby           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	g_n1 = '0';
char	g_n2 = '0';
char	g_n3 = '0';
char	g_n4 = '1';

void	ft_putchar(char c);

void	ft_push(void)
{
	if ((g_n1 * 10) + g_n2 < (g_n3 * 10) + g_n4)
	{
		ft_putchar(g_n1);
		ft_putchar(g_n2);
		ft_putchar(' ');
		ft_putchar(g_n3);
		ft_putchar(g_n4);
		if (g_n1 != '9' || g_n2 != '8' || g_n3 != '9' || g_n4 != '9')
		{
			ft_putchar(',');
			ft_putchar(' ');
		}
	}
}

void	ft_print_comb2(void)
{
	while (g_n1 <= '9')
	{
		while (g_n2 <= '9')
		{
			while (g_n3 <= '9')
			{
				while (g_n4 <= '9')
				{
					ft_push();
					g_n4++;
				}
				g_n3++;
				g_n4 = '0';
			}
			g_n2++;
			g_n3 = g_n1;
			g_n4 = g_n2 + 1;
		}
		g_n1++;
		g_n2 = '0';
	}
}
