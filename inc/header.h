/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpicot <jpicot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/04 13:50:28 by jpicot            #+#    #+#             */
/*   Updated: 2016/12/12 13:38:33 by jpicot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADER_H
# define HEADER_H

# include <fcntl.h>
# include "chars.h"
# include "strings.h"
# include "memory.h"
# include "t_lst.h"
# include "numbers.h"
# include "arrays.h"

# define BUFF_SIZE 545

int		opcl_input(char *source_file, char **dst);
int		check_error(char *str, int *nbt);
int		get_tetri(char *str, int ****a_tet, int nbt);
int		fillit(int ****a_tet, int nbt);
int		test_square(int ****a_tet, char ***square, int *p);

#endif
