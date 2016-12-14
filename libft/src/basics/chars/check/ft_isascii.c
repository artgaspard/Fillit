/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpicot <jpicot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/05 16:44:09 by jpicot            #+#    #+#             */
/*   Updated: 2016/12/11 13:47:34 by jpicot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char		ft_isascii(char c)
{
	return (c >= 0 && c <= 127);
}