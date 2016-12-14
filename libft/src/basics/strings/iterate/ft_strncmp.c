/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpicot <jpicot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/08 17:07:40 by jpicot            #+#    #+#             */
/*   Updated: 2016/12/11 16:34:44 by jpicot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned char	*p1;
	unsigned char	*p2;

	p1 = (unsigned char *)(s1 - 1);
	p2 = (unsigned char *)(s2 - 1);
	while ((--n) + 1 && *(++p1) == *(++p2) && *p1 && *p2)
		;
	return (*p1 - *p2);
}
