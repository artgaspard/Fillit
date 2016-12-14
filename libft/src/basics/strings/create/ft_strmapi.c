/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpicot <jpicot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/10 18:09:07 by jpicot            #+#    #+#             */
/*   Updated: 2016/12/11 15:34:49 by jpicot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*dst;

	if (!s)
		return (NULL);
	i = 0;
	while (s[i])
		i++;
	if (!(dst = (char *)malloc(sizeof(char) * (i + 1))))
		return (NULL);
	dst[i] = '\0';
	while ((int)--i >= 0)
		dst[i] = f(i, s[i]);
	return (dst);
}
