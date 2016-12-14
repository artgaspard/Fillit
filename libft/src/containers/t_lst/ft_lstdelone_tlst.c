/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpicot <jpicot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/19 16:41:33 by jpicot            #+#    #+#             */
/*   Updated: 2016/12/11 18:11:00 by jpicot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "containers/t_lst.h"
#include <stdlib.h>

void	ft_lstdelone_tlst(t_lst **alst, void (*del)(void *, size_t))
{
	if (alst && del)
	{
		del((*alst)->content, (*alst)->content_size);
		free(*alst);
		*alst = NULL;
	}
}
