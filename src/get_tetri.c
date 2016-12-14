/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_tetri.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpicot <jpicot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/04 16:50:05 by jpicot            #+#    #+#             */
/*   Updated: 2016/12/06 16:16:10 by jpicot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

static void		min_pos(int ****a_tet, int t)
{
	int			xmin;
	int			ymin;
	int			h;

	h = 0;
	xmin = (*a_tet)[t][0][0];
	while (++h < 3)
	{
		if ((*a_tet)[t][0][h] < xmin)
			xmin = (*a_tet)[t][0][h];
	}
	h = 0;
	ymin = (*a_tet)[t][1][0];
	while (++h < 3)
	{
		if ((*a_tet)[t][1][h] < ymin)
			ymin = (*a_tet)[t][1][h];
	}
	h = -1;
	while (++h <= 3)
		(*a_tet)[t][0][h] = (*a_tet)[t][0][h] - xmin;
	h = -1;
	while (++h <= 3)
		(*a_tet)[t][1][h] = (*a_tet)[t][1][h] - ymin;
}

static void		get_pos(char *str, int ****a_tet, int nbt)
{
	int			i;
	int			t;
	int			h;

	i = 0;
	t = 0;
	while (t < nbt && str[i])
	{
		h = 0;
		while (i % 21 < 19)
		{
			if (str[i] == '#')
			{
				(*a_tet)[t][0][h] = (i % 21) % 5;
				(*a_tet)[t][1][h] = (i % 21) / 5;
				(*a_tet)[t][2][0] = 50;
				h++;
			}
			i++;
		}
		min_pos(a_tet, t);
		i += 2;
		t++;
	}
}

int				get_tetri(char *str, int ****a_tet, int nbt)
{
	int			a;

	if (!(*a_tet = (int ***)malloc(sizeof(int **) * (nbt + 1))))
		return (0);
	(*a_tet)[nbt] = 0;
	a = 0;
	while (a < nbt)
	{
		if (!((*a_tet)[a] = (int **)malloc(sizeof(int *) * 4)))
			return (0);
		(*a_tet)[a][3] = 0;
		if (!((*a_tet)[a][0] = (int *)malloc(sizeof(int) * 4)))
			return (0);
		if (!((*a_tet)[a][1] = (int *)malloc(sizeof(int) * 4)))
			return (0);
		if (!((*a_tet)[a++][2] = (int *)malloc(sizeof(int))))
			return (0);
	}
	get_pos(str, a_tet, nbt);
	return (1);
}
