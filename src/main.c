/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpicot <jpicot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/04 13:55:37 by jpicot            #+#    #+#             */
/*   Updated: 2016/12/09 10:56:19 by jpicot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int			main(int ac, char **av)
{
	char	*str;
	int		***a_tet;
	int		nbt;

	if (ac != 2)
	{
		write(1, "usage : ./fillit source_file\n", 29);
		return (0);
	}
	if (!(opcl_input(av[1], &str)) || !(check_error(str, &nbt)))
	{
		write(1, "error\n", 6);
		return (0);
	}
	if (!(get_tetri(str, &a_tet, nbt)) || !(fillit(&a_tet, nbt)))
	{
		free(str);
		write(1, "error\n", 6);
		return (0);
	}
	free(str);
	return (1);
}
