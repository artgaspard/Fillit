/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpicot <jpicot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/06 14:18:41 by jpicot            #+#    #+#             */
/*   Updated: 2016/12/11 17:30:41 by jpicot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "basics/strings.h"
#include <stdlib.h>

char	*ft_strdup(const char *s1)
{
	char	*s2;

	if ((s2 = (char *)malloc(sizeof(char) * (ft_strlen(s1) + 1))) == 0)
		return (NULL);
	ft_strcpy(s2, s1);
	return (s2);
}
