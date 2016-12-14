/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   numbers.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpicot <jpicot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/11 12:40:52 by jpicot            #+#    #+#             */
/*   Updated: 2016/12/12 11:04:37 by jpicot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
*** FILE			numbers.h
*** SUM			Numbers management functions
*/

#ifndef LIBFT_NUMBERS_H
# define LIBFT_NUMBERS_H

# include "chars.h"
# include <stdlib.h>

/*
**								[[[CONVERS]]]
*/

/*
** SUM
** PARAM
** RETURN
*/
int				ft_atoi(const char *str);

/*
** SUM
** PARAM
** RETURN
*/
int				ft_itoa(int n);

/*
**								[[[OUTPUT]]]
*/

/*
** SUM
** PARAM
** RETURN
*/
void			ft_putnbr(int n);

/*
** SUM
** PARAM
** RETURN
*/
void			ft_putnbr_fd(int n, int fd);

#endif
