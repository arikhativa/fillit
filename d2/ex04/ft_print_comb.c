/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrabby <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/09 16:03:46 by yrabby            #+#    #+#             */
/*   Updated: 2019/02/13 13:41:46 by yrabby           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	g_n1 = '0';
char	g_n2 = '1';
char	g_n3 = '2';

int		ft_putchar(char c);

void	ft_push(void)
{
	ft_putchar(g_n1);
	ft_putchar(g_n2);
	ft_putchar(g_n3);
	if (g_n1 != '7' || g_n2 != '8' || g_n3 != '9')
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_print_comb(void)
{
	while (g_n1 <= '7')
	{
		while (g_n2 <= '8')
		{
			while (g_n3 <= '9')
			{
				ft_push();
				g_n3++;
			}
			g_n2++;
			g_n3 = g_n2 + 1;
		}
		g_n1++;
		g_n2 = g_n1;
	}
}
