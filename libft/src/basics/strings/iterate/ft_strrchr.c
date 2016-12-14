/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpicot <jpicot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/08 12:01:41 by jpicot            #+#    #+#             */
/*   Updated: 2016/12/11 16:37:22 by jpicot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strrchr(const char *s, int c)
{
	char	*ptr;
	int		len;

	len = 0;
	ptr = (char *)s;
	while (*(ptr++) != '\0' && ++len)
		;
	if (c == '\0')
		return (--ptr);
	while (--len > -2)
	{
		if (*(--ptr) == c)
			return (ptr);
	}
	return (NULL);
}
