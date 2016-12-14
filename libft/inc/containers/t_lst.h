/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   t_lst.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpicot <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/11 17:55:23 by jpicot            #+#    #+#             */
/*   Updated: 2016/12/12 11:31:33 by jpicot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_T_LST_H
# define LIBFT_T_LST_H

# include <stdlib.h>

typedef struct			s_lst
{
	void				*content;
	size_t				content_size;
	struct s_lst		*next;
}						t_lst;

/*
** SUM         		Adds one element 'new' at the top of the list.
** PARAM
** RETURN
*/
void					ft_lstadd_tlst(t_lst **alst, t_lst *new);

/*
** SUM
** PARAM
** RETURN
**
** Frees the memory pointed by a pointer and those of the following links
** with function del. The pointer on the first link freeed is setted to NULL.
*/
void					ft_lstdel_tlst(t_lst **alst, void (*del)(void *, \
																size_t));

/*
** SUM         		Frees the memory of the link pointed with function del.
**					Field next is not freeed and the pointer is setted to NULL.
** PARAM
** RETURN
*/
void					ft_lstdelone_tlst(t_lst **alst, void (*del)(void *, \
																size_t));

/*
** SUM         		Applies function f to every link of the list.
** PARAM
** RETURN
*/
void					ft_lstiter_tlst(t_lst *lst, void (*f)(t_lst *elem));

/*
** SUM
** PARAM
** RETURN
**
** Creates a new list with the applies of funtion f on every links of the list
** and return it.
*/
t_lst					*ft_lstmap_tlst(t_lst *lst, t_lst *(*f)(t_lst *elem));

/*
** SUM         		Creates a new link with fields content and content_size.
** PARAM
** RETURN
*/
t_lst					*ft_lstnew_tlst(void const *content, \
										size_t content_size);

#endif
