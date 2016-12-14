/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpicot <jpicot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/11 20:00:55 by jpicot            #+#    #+#             */
/*   Updated: 2016/12/11 15:40:56 by jpicot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static size_t	ft_count(char *ptr)
{
	int		len;

	len = 0;
	while (*ptr == ' ' || *ptr == '\n' || *ptr == '\t')
		ptr++;
	while (*(ptr))
	{
		len++;
		ptr++;
	}
	if (len)
		ptr--;
	while (*ptr == ' ' || *ptr == '\n' || *ptr == '\t')
	{
		len--;
		ptr--;
	}
	return (len);
}

char			*ft_strtrim(char const *s)
{
	char	*ptr;
	int		len;
	int		tmp;
	char	*dst;

	if (!s)
		return (NULL);
	ptr = (char *)s;
	len = ft_count(ptr);
	if (!(dst = (char *)malloc(sizeof(char) * (len + 1))))
		return (NULL);
	while (*ptr == ' ' || *ptr == '\n' || *ptr == '\t')
		ptr++;
	tmp = len;
	while (len--)
		*(dst++) = *(ptr++);
	*dst = '\0';
	return (dst - tmp);
}
