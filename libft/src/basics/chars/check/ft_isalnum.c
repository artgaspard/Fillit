/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpicot <jpicot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/05 16:11:36 by jpicot            #+#    #+#             */
/*   Updated: 2016/12/11 13:46:44 by jpicot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char		ft_isalnum(char c)
{
	return ((c >= '0' && c <= '9') || (c >= 'A' && c <= 'Z') || \
			(c >= 'a' && c <= 'z'));
}
