/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpicot <jpicot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/05 16:59:42 by jpicot            #+#    #+#             */
/*   Updated: 2016/12/11 14:09:20 by jpicot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char			ft_toupper(char c)
{
	return (c > 96 && c < 123) ? (c - 32) : c;
}