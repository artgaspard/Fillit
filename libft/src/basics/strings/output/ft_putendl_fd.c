/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpicot <jpicot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/17 16:59:57 by jpicot            #+#    #+#             */
/*   Updated: 2016/12/11 17:33:56 by jpicot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "basics/strings.h"
#include <unistd.h>

void	ft_putendl_fd(char const *s, int fd)
{
	if (s)
	{
		write(fd, s, ft_strlen(s));
		write(fd, "\n", 1);
	}
}
