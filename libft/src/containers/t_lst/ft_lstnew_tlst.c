/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpicot <jpicot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/19 15:12:56 by jpicot            #+#    #+#             */
/*   Updated: 2016/12/11 18:46:02 by jpicot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "basics/memory.h"
#include "containers/t_lst.h"
#include <stdlib.h>

t_lst		*ft_lstnew_tlst(void const *content, size_t content_size)
{
	t_lst	*newlist;

	if (!(newlist = (t_lst *)malloc(sizeof(t_lst))))
		return (NULL);
	newlist->next = NULL;
	newlist->content = NULL;
	if (!content)
	{
		newlist->content = NULL;
		newlist->content_size = 0;
		return (newlist);
	}
	if (!(newlist->content = malloc(content_size)))
		return (NULL);
	ft_memcpy(newlist->content, (void *)content, content_size);
	newlist->content_size = content_size;
	return (newlist);
}
