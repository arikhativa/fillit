/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrabby <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/30 15:34:48 by yrabby            #+#    #+#             */
/*   Updated: 2019/05/16 14:00:24 by yrabby           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILLIT_H
# define FILLIT_H
# include <stdlib.h>
# include <fcntl.h>
# include <unistd.h>
# include "libft.h"
typedef struct	s_point
{
	int			x;
	int			y;
}				point;

typedef struct	s_shape
{
	point			*p;
	struct s_shape	*next;
}				t_shape;

t_shape			*make_list(int fd);
int			check_file(int fd);
int			square_size(int nbr);
char			**make_square(int size);
int			add_shape(t_shape *elem, char c, char **tab, int size);
void			print_tab(char **tab);

#endif
