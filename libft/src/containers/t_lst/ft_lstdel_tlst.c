/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpicot <jpicot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/19 17:06:30 by jpicot            #+#    #+#             */
/*   Updated: 2016/12/11 18:11:19 by jpicot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "containers/t_lst.h"
#include <stdlib.h>

void	ft_lstdel_tlst(t_lst **alst, void (*del)(void *, size_t))
{
	while (*alst && alst)
	{
		del((*alst)->content, (*alst)->content_size);
		free(*alst);
		*alst = (*alst)->next;
	}
}
