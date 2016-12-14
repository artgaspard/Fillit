/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpicot <jpicot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/19 17:22:30 by jpicot            #+#    #+#             */
/*   Updated: 2016/12/11 18:06:18 by jpicot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "containers/t_lst.h"

void	ft_lstadd_tlst(t_lst **alst, t_lst *new)
{
	new->next = *alst;
	*alst = new;
}