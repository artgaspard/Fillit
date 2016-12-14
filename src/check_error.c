/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_error.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agaspard <agaspard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/28 14:06:22 by agaspard          #+#    #+#             */
/*   Updated: 2016/12/12 12:42:24 by jpicot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

static int	check_hash(char *str)
{
	int		i;
	int		links;

	i = 0;
	links = 0;
	while (i < 19)
	{
		if (str[i] == '#')
		{
			if (i >= 5 && str[i - 5] == '#')
				links++;
			if (i <= 14 && str[i + 5] == '#')
				links++;
			if (i >= 1 && str[i - 1] == '#')
				links++;
			if (i <= 17 && str[i + 1] == '#')
				links++;
		}
		i++;
	}
	if (links != 6 && links != 8)
		return (0);
	return (1);
}

static int	check_tetri(char *str)
{
	int		i;
	int		hash;

	hash = 0;
	i = 0;
	while (i < 20)
	{
		if (str[i] == '#')
			hash++;
		if (((i == 4 || i == 9 || i == 14 || i == 19) && str[i] != '\n') || \
			((i != 4 && i != 9 && i != 14 && i != 19) && \
			(str[i] != '.' && str[i] != '#')))
			return (0);
		i++;
	}
	if (hash != 4)
		return (0);
	return (1);
}

int			check_error(char *str, int *nbt)
{
	int		i;
	int		start;

	i = 0;
	start = 0;
	*nbt = 0;
	while (str[i])
	{
		if ((str[i] != '.' && str[i] != '#' && str[i] != '\n') || i >= 545)
			return (0);
		i++;
	}
	while ((start == 0) || (str[start - 1]))
	{
		if (start && str[start - 1] != '\n')
			return (0);
		if (!(check_tetri(&str[start])) || !(check_hash(&str[start])))
			return (0);
		*nbt += 1;
		start += 21;
	}
	return (1);
}
