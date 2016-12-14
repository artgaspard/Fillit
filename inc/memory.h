/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memory.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpicot <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/11 14:13:34 by jpicot            #+#    #+#             */
/*   Updated: 2016/12/12 11:42:59 by jpicot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** FILE			memory.h
** SUM			Memory management functions
**
** Functions to
*/

#ifndef LIBFT_MEMORY_H
# define LIBFT_MEMORY_H

# include <stdlib.h>

/*
**							[[[CREATE]]]
*/

/*
** SUM          Assigns memory and return pointer on its location.
** PARAM
** RETURN
*/
void			*ft_memalloc(size_t size);

/*
**							[[[DELETE]]]
*/

/*
** SUM
** PARAM
** RETURN
*/
void			ft_memdel(void **ap);

/*
**							[[[ITERATE]]]
*/

/*
** SUM
** PARAM
** RETURN
**
** It scans memory for the first instance of the character in the
** initial n bytes of the memory area pointed by s. Both are interpreted
** as unsigned char. It returns a pointer to the matching byte, NULL if
** character does not occur.
*/
void			*ft_memchr(const void *s, int c, size_t n);

/*
** SUM
** PARAM
** RETURN
**
** Compared the first n bytes (interpreted as unsigned char) of the memory
** areas s1 ans s2.
*/
int				ft_memcmp(const void *s1, const void *s2, size_t n);

/*
**							[[[TRANSFORM]]]
*/

/*
** SUM          Sets the first n bytes of the area starting at s to zero.
** PARAM
** RETURN
*/
void			ft_bzero(void *s, size_t n);

/*
** SUM
** PARAM
** RETURN
**
** Copies memory area, no more than n bytes from memory area src ro memory area
** dest, stopping when the character c is found.
** It returns a pointer to the next character in dest after c, or NULL if c
** was not found in the first n characters of src.
** If the memory overlap, the results are undefined.
*/
void			*ft_memccpy(void *dst, const void *src, int c, size_t n);

/*
** SUM
** PARAM
** RETURN
**
** Copies n bytes from memory area src to memory area dest.
** The memory areas must not overlap (use ft_memmove instead).
*/
void			*ft_memcpy(void *dst, const void *src, size_t n);

/*
** SUM
** PARAM
** RETURN
*/
void			*ft_memmove(void *dst, const void *src, size_t len);

/*
** SUM          Fills the first n bytes of the memory area pointed by s with c.
** PARAM
** RETURN
*/
void			*ft_memset(void *b, int c, size_t len);

#endif
