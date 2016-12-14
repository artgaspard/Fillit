/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strndup.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpicot <jpicot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/06 14:18:41 by jpicot            #+#    #+#             */
/*   Updated: 2016/12/11 17:30:57 by jpicot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "basics/strings.h"

char	*ft_strndup(const char *s1, size_t n)
{
	char	*s2;
	size_t	len;

	len = ft_strlen(s1);
	if (n <= len)
		len = n;
	if ((s2 = (char *)malloc(sizeof(char) * (len + 1))) == 0)
		return (NULL);
	ft_strncpy(s2, s1, n);
	return (s2);
}
