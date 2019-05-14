/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrabby <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/30 15:34:48 by yrabby            #+#    #+#             */
/*   Updated: 2019/05/14 13:30:30 by yrabby           ###   ########.fr       */
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
	int		x;
	int		y;
}				point;

typedef struct	shape_list
{
	/*int					x1;
	int					y1;
	int					x2;
	int					y2;
	int					x3;
	int					y3;
	int					x4;
	int					y4;*/
	point				*p;
	struct shape_list	*next;
}				t_shape;

t_shape			*make_list(int fd, int nbr);

void			check_new_line(char *line);
void			check_line_len(char *line);
void			check_bad_char(char *line);
void			if_exit(void);
int				check_file(int fd);

int				square_size(int nbr);

#endif
