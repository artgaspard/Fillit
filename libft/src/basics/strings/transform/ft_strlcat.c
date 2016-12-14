/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpicot <jpicot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/07 10:38:29 by jpicot            #+#    #+#             */
/*   Updated: 2016/12/11 17:36:00 by jpicot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "basics/strings.h"
#include <stdlib.h>

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t		len;
	size_t		i;

	len = size;
	i = ft_strlen(dst);
	if (size <= i)
		len = i + 1;
	if (size > i)
	{
		ft_strncpy(&dst[i], src, \
				(size - i - 1));
		if (&dst[size - 1])
			dst[size - 1] = '\0';
	}
	if (size <= i)
		return (ft_strlen(src) + size);
	return (i + ft_strlen(src));
}
