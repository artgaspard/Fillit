/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpicot <jpicot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/09 21:40:11 by jpicot            #+#    #+#             */
/*   Updated: 2016/12/11 14:23:12 by jpicot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_memalloc(size_t size)
{
	char	*ptr;

	if (!(ptr = (char *)malloc(sizeof(char) * size)))
		return (NULL);
	while ((int)size-- >= 0)
		*(ptr + size) = '\0';
	return (ptr);
}
