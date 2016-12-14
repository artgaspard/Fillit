/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpicot <jpicot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/08 16:21:55 by jpicot            #+#    #+#             */
/*   Updated: 2016/12/11 16:27:10 by jpicot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strcmp(const char *s1, const char *s2)
{
	unsigned char	*p1;
	unsigned char	*p2;

	p1 = (unsigned char *)(s1 - 1);
	p2 = (unsigned char *)(s2 - 1);
	while (*(++p1) == *(++p2) && *p1 && *p2)
		;
	return (*p1 - *p2);
}
