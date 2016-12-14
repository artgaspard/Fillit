/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpicot <jpicot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/17 16:49:59 by jpicot            #+#    #+#             */
/*   Updated: 2016/12/11 17:33:31 by jpicot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "basics/strings.h"

void	ft_putendl(char const *s)
{
	if (s)
	{
		write(1, s, ft_strlen(s));
		write(1, "\n", 1);
	}
}
