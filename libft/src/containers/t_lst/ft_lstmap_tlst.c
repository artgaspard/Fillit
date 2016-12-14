/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpicot <jpicot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/19 17:52:37 by jpicot            #+#    #+#             */
/*   Updated: 2016/12/11 18:44:46 by jpicot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "basics/strings.h"
#include "containers/t_lst.h"

t_lst		*ft_lstmap_tlst(t_lst *lst, t_lst *(*f)(t_lst *elem))
{
	t_lst	*newlist;
	t_lst	*ptr;

	if (!lst || !f)
		return (NULL);
	if (!(newlist = ft_lstnew_tlst(f(lst)->content, f(lst)->content_size)))
		return (NULL);
	ptr = newlist;
	while (lst->next)
	{
		lst = lst->next;
		if (!(ptr->next = ft_lstnew_tlst(f(lst)->content, \
						f(lst)->content_size)))
			return (NULL);
		ptr = ptr->next;
	}
	return (newlist);
}
