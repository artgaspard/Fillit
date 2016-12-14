/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpicot <jpicot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/19 17:43:11 by jpicot            #+#    #+#             */
/*   Updated: 2016/12/11 18:43:10 by jpicot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "basics/strings.h"
#include "containers/t_lst.h"

void	ft_lstiter_tlst(t_lst *lst, void (*f)(t_lst *elem))
{
	while (lst && f)
	{
		f(lst);
		lst = lst->next;
	}
}
