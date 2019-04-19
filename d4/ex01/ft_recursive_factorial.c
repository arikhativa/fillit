/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrabby <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/14 10:40:09 by yrabby            #+#    #+#             */
/*   Updated: 2019/02/15 15:43:42 by yrabby           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_recursive_factorial(int nb)
{
	int a;

	if (nb > 12 || nb < 0)
		return (0);
	else if (nb == 0)
		return (1);
	else if (nb > 1)
		a = nb * ft_recursive_factorial(nb - 1);
	else
		return (1);
	return (a);
}
