/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpicot <jpicot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/10 17:36:56 by jpicot            #+#    #+#             */
/*   Updated: 2016/12/11 15:33:14 by jpicot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strmap(char const *s, char (*f)(char))
{
	char			*dst;
	char			*ptr;
	unsigned int	len;

	if (!s)
		return (NULL);
	ptr = (char *)s;
	len = 0;
	while (ptr[len])
		len++;
	if (!(dst = (char *)malloc(sizeof(char) * (len + 1))))
		return (NULL);
	while (*ptr)
		*(dst++) = f(*(ptr++));
	*dst = '\0';
	return (dst - len);
}
