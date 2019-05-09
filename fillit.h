/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrabby <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/30 15:34:48 by yrabby            #+#    #+#             */
/*   Updated: 2019/05/09 16:30:08 by yrabby           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILLIT_H
# define FILLIT_H

# include <stdlib.h>
# include <fcntl.h>
# include <sys/types.h>
# include <sys/uio.h>
# include <unistd.h>

#include "libft.h"

typedef struct	s_point
{
	int		x;
	int		y;
}				point;

int				shape_id(point p1, point p2, point p3, point p4);

int				count_shapes(int fd, int *shape);
void			zero_shape(int *shape);

void			check_new_line(char *line);
void			check_line_len(char *line);
void			check_bad_char(char *line);
void			if_exit(void);
void			check_file(int fd);

int				square_size(int nbr);

#endif
