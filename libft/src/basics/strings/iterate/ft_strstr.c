/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpicot <jpicot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/08 14:40:14 by jpicot            #+#    #+#             */
/*   Updated: 2016/12/11 16:37:58 by jpicot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strstr(const char *big, const char *little)
{
	char	*ptr;
	int		len;

	ptr = (char *)big - 1;
	if (!little[0])
		return (++ptr);
	while (*(++ptr))
	{
		len = 0;
		while (*(ptr++) == little[len] && *(ptr - 1) && little[len])
			len++;
		ptr -= (len + 1);
		if (!little[len])
			return (ptr);
	}
	return (NULL);
}
