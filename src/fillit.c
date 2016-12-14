/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpicot <jpicot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/04 18:06:14 by jpicot            #+#    #+#             */
/*   Updated: 2016/12/12 12:05:03 by jpicot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

static int	size_square(int nbt)
{
	int		rac;

	rac = 0;
	nbt *= 4;
	while (rac * rac < nbt)
		rac++;
	return (rac);
}

static int	set_array(char ***square, int size)
{
	int		i;
	int		j;

	if (!(*square = (char **)malloc(sizeof(char *) * (size + 1))))
		return (0);
	i = -1;
	while (++i < size)
	{
		if (!((*square)[i] = (char *)malloc(sizeof(char) * (size + 1))))
			return (0);
		j = -1;
		while (++j < size)
			(*square)[i][j] = '.';
		(*square)[i][j] = '\0';
	}
	(*square)[i] = NULL;
	return (1);
}

int			fillit(int ****a_tet, int nbt)
{
	char	**square;
	int		size;
	int		p[4];

	p[3] = nbt;
	size = size_square(nbt);
	if (!(set_array(&square, size)))
		return (0);
	while (!(test_square(a_tet, &square, p)))
	{
		if (!(set_array(&square, ++size)))
			return (0);
	}
	ft_putachr(square);
	return (1);
}
