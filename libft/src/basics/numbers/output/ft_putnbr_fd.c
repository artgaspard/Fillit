/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpicot <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/06 15:02:39 by jpicot            #+#    #+#             */
/*   Updated: 2016/12/11 17:26:29 by jpicot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "basics/chars.h"

void	ft_putnbr_fd(int n, int fd)
{
	unsigned int	nb;

	nb = n;
	if (n < 0)
	{
		ft_putchr_fd('-', fd);
		nb = -n;
	}
	if (nb > 9)
		ft_putnbr_fd((nb / 10), fd);
	ft_putchr_fd(((nb % 10) + '0'), fd);
}
