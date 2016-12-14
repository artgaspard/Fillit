/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpicot <jpicot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/17 12:32:03 by jpicot            #+#    #+#             */
/*   Updated: 2016/12/11 15:07:28 by jpicot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static void		ft_size_malloc(int *n, unsigned int *nb, size_t *len)
{
	*len = 0;
	if (*n < 0)
	{
		*len = *len + 1;
		*nb = -(*n);
	}
	else
		*nb = *n;
	if (!*nb)
		*len = 1;
	while (*nb)
	{
		*nb = *nb / 10;
		*len = *len + 1;
	}
}

static void		ft_set_res(char **res, size_t *len, unsigned int *nb, int *n)
{
	*nb = *n;
	if (*n < 0)
	{
		**res = '-';
		*nb = -(*n);
	}
	*res = *res + *len;
	**res = '\0';
	*res = *res - 1;
	while ((*nb / 10))
	{
		**res = (*nb % 10) + '0';
		*nb = (*nb / 10);
		*res = *res - 1;
	}
	**res = (*nb % 10) + '0';
	if (*n < 0)
		*res = *res - 1;
}

char			*ft_itoa(int n)
{
	char			*res;
	size_t			len;
	unsigned int	nb;

	ft_size_malloc(&n, &nb, &len);
	if (!(res = (char *)malloc(sizeof(char) * (len + 1))))
		return (NULL);
	ft_set_res(&res, &len, &nb, &n);
	return (res);
}
