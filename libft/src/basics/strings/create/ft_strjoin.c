/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpicot <jpicot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/11 16:57:50 by jpicot            #+#    #+#             */
/*   Updated: 2016/12/11 17:32:21 by jpicot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "basics/strings.h"
#include <stdlib.h>

char	*ft_strjoin(char const *s1, char const *s2)
{
	char		*dst;
	char		*p1;
	char		*p2;
	size_t		len;

	if (!s1 || !s2)
		return (NULL);
	p1 = (char *)s1;
	p2 = (char *)s2;
	len = ft_strlen(p1) + ft_strlen(p2);
	if (!(dst = (char *)malloc(sizeof(char) * (len + 1))))
		return (NULL);
	while (*p1)
		*(dst++) = *(p1++);
	while (*p2)
		*(dst++) = *(p2++);
	*dst = '\0';
	return (dst - len);
}
