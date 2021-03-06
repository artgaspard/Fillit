/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpicot <jpicot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/10 13:07:47 by jpicot            #+#    #+#             */
/*   Updated: 2016/12/11 16:29:11 by jpicot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_striter(char *s, void (*f)(char *))
{
	char *ptr;

	if (s && f)
	{
		ptr = s;
		while (*ptr)
		{
			f(ptr);
			ptr++;
		}
	}
}
