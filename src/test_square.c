/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_square.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpicot <jpicot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/08 10:58:03 by jpicot            #+#    #+#             */
/*   Updated: 2016/12/10 16:31:36 by jpicot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

static void		del_tetri(int ****a_tet, char ***square, int *p)
{
	(*square)[p[1] + (*a_tet)[p[2]][1][0]]\
		[p[0] + (*a_tet)[p[2]][0][0]] = '.';
	(*square)[p[1] + (*a_tet)[p[2]][1][1]]\
		[p[0] + (*a_tet)[p[2]][0][1]] = '.';
	(*square)[p[1] + (*a_tet)[p[2]][1][2]]\
		[p[0] + (*a_tet)[p[2]][0][2]] = '.';
	(*square)[p[1] + (*a_tet)[p[2]][1][3]]\
		[p[0] + (*a_tet)[p[2]][0][3]] = '.';
	(*a_tet)[p[2]][2][0] = 50;
}

static int		check_cond(int ****a_tet, char ***square, int *p)
{
	int s;

	s = 0;
	while ((*square)[s])
		s++;
	if ((p[1] + (*a_tet)[p[2]][1][0]) < s && (p[0] + (*a_tet)[p[2]][0][0]) < s
	&& (p[1] + (*a_tet)[p[2]][1][1]) < s && (p[0] + (*a_tet)[p[2]][0][1]) < s
	&& (p[1] + (*a_tet)[p[2]][1][2]) < s && (p[0] + (*a_tet)[p[2]][0][2]) < s
	&& (p[1] + (*a_tet)[p[2]][1][3]) < s && (p[0] + (*a_tet)[p[2]][0][3]) < s
	&& (*square)[p[1] + (*a_tet)[p[2]][1][0]]\
	[p[0] + (*a_tet)[p[2]][0][0]] == '.' && \
	(*square)[p[1] + (*a_tet)[p[2]][1][1]]\
	[p[0] + (*a_tet)[p[2]][0][1]] == '.' && \
	(*square)[p[1] + (*a_tet)[p[2]][1][2]]\
	[p[0] + (*a_tet)[p[2]][0][2]] == '.' && \
	(*square)[p[1] + (*a_tet)[p[2]][1][3]]\
	[p[0] + (*a_tet)[p[2]][0][3]] == '.')
		return (1);
	return (0);
}

static int		put_tetri(int ****a_tet, char ***square, int *p)
{
	if ((check_cond(a_tet, square, p)))
	{
		(*square)[p[1] + (*a_tet)[p[2]][1][0]]\
			[p[0] + (*a_tet)[p[2]][0][0]] = 'A' + p[2];
		(*square)[p[1] + (*a_tet)[p[2]][1][1]]\
			[p[0] + (*a_tet)[p[2]][0][1]] = 'A' + p[2];
		(*square)[p[1] + (*a_tet)[p[2]][1][2]]\
			[p[0] + (*a_tet)[p[2]][0][2]] = 'A' + p[2];
		(*square)[p[1] + (*a_tet)[p[2]][1][3]]\
			[p[0] + (*a_tet)[p[2]][0][3]] = 'A' + p[2];
		(*a_tet)[p[2]][2][0] = 51;
		return (1);
	}
	return (0);
}

static int		*copy_p(int *p, int *tmp)
{
	tmp[0] = p[0];
	tmp[1] = p[1];
	tmp[2] = p[2];
	tmp[3] = p[3];
	return (tmp);
}

int				test_square(int ****a_tet, char ***square, int *p)
{
	int			tmp[4];

	p[2] = 0;
	while (p[2] < p[3] && (*a_tet)[p[2]][2][0] == 51)
		p[2]++;
	p[1] = -1;
	while ((*square)[++p[1]])
	{
		p[0] = -1;
		while ((**square)[++p[0]])
		{
			if (put_tetri(a_tet, square, p))
			{
				if (p[2] + 1 == p[3])
					return (1);
				if (test_square(a_tet, square, copy_p(p, tmp)))
					return (1);
				del_tetri(a_tet, square, p);
			}
		}
	}
	return (0);
}
