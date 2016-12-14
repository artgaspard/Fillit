/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpicot <jpicot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/04 15:22:06 by jpicot            #+#    #+#             */
/*   Updated: 2016/12/11 14:48:22 by jpicot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char	*pdst;
	unsigned char	*psrc;

	psrc = (unsigned char *)src;
	pdst = (unsigned char *)dst;
	if (!dst && !src)
		return (NULL);
	while (n--)
	{
		if ((*(pdst++) = *(psrc++)) == (unsigned char)c)
			return (pdst);
	}
	return (NULL);
}
