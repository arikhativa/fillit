/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   shape_id.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrabby <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/04 11:34:33 by yrabby            #+#    #+#             */
/*   Updated: 2019/05/04 12:41:47 by yrabby           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

static int		if_p1x_not_zero(point p1, point p2, point p3, point p4)
{
	if (p1.y == 1 && p2.x == 0 && p2.y == 2 && p3.x == 1 && p3.y == 2
			&& p4.x == 0 && p4.y == 3)
		return (3);
	if (p1.y == 1 && p2.x == 2 && p2.y == 1 && p3.x == 0 && p3.y == 2
			&& p4.x == 1 && p4.y == 2)
		return (5);
	if (p1.x == 1 && p1.y == 1 && p2.x == 0 && p2.y == 2 &&
			p3.x == 1 && p3.y == 2 && p4.x == 2 && p4.y == 2)
		return (6);
	if (p1.y == 1 && p2.x == 0 && p2.y == 2 && p3.x == 1 && p3.y == 2
			&& p4.x == 1 && p4.y == 3)
		return (8);
	if (p1.y == 1 && p2.x == 1 && p2.y == 2 && p3.x == 0 && p3.y == 3
			&& p4.x == 1 && p4.y == 3)
		return (13);
	if (p1.y == 1 && p2.x == 0 && p2.y == 2 && p3.x == 1 && p3.y == 2
			&& p4.x == 2 && p4.y == 2)
		return (16);
	return (-1);
}

static int		shape_l(point p2, point p3, point p4)
{
	if (p2.x == 1 && p2.y == 1 && p3.x == 0 &&
			p3.y == 2 && p4.x == 0 && p4.y == 3)
		return (10);
	if (p2.x == 1 && p2.y == 1 && p3.x == 1 &&
			p3.y == 2 && p4.x == 1 && p4.y == 3)
		return (11);
	if (p2.x == 0 && p2.y == 2 && p3.x == 0 &&
			p3.y == 3 && p4.x == 1 && p4.y == 3)
		return (12);
	if (p2.x == 1 && p2.y == 1 && p3.x == 2 &&
			p3.y == 1 && p4.x == 2 && p4.y == 2)
		return (14);
	if (p2.x == 1 && p2.y == 1 && p3.x == 2 &&
			p3.y == 1 && p4.x == 0 && p4.y == 2)
		return (15);
	if (p2.x == 0 && p2.y == 2 && p3.x == 1 &&
			p3.y == 2 && p4.x == 2 && p4.y == 2)
		return (17);
	return (-1);
}

int				shape_id(point p1, point p2, point p3, point p4)
{
	if (p1.x != 0)
		return (if_p1x_not_zero(p1, p2, p3, p4));
	if (p2.y == 1 && p3.y == 1 && p4.y == 1)
		return (0);
	if (p2.x == 0 && p3.x == 0 && p4.x == 0)
		return (1);
	if (p2.x == 0 && p2.y == 2 && p3.x == 1 &&
			p3.y == 2 && p4.x == 1 && p4.y == 3)
		return (2);
	if (p2.x == 1 && p2.y == 1 && p3.x == 1 &&
			p3.y == 2 && p4.x == 2 && p4.y == 2)
		return (4);
	if (p2.x == 1 && p2.y == 1 && p3.x == 2 &&
			p3.y == 1 && p4.x == 1 && p4.y == 2)
		return (7);
	if (p2.x == 0 && p2.y == 2 && p3.x == 1 &&
			p3.y == 2 && p4.x == 0 && p4.y == 3)
		return (9);
	if (p2.x == 1 && p2.y == 1 && p3.x == 0 &&
			p3.y == 2 && p4.x == 1 && p4.y == 2)
		return (18);
	return (shape_l(p2, p3, p4));
}
