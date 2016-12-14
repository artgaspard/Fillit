/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strings.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpicot <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/11 15:19:10 by jpicot            #+#    #+#             */
/*   Updated: 2016/12/12 11:26:19 by jpicot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** FILE         strings.h
** SUM          S strings management functions
*/

#ifndef LIBFT_STRINGS_H
# define LIBFT_STRINGS_H

# include <stdlib.h>
# include <unistd.h>

/*
**                              [[[CREATE]]]
*/

/*
** SUM			Duplicates a string with malloc.
** PARAM
** RETURN
*/
char				*ft_strdup(const char *s1);

/*
** SUM			Assigns memory to concatenate the two stings.
** PARAM
** RETURN
*/
char				*ft_strjoin(char const *s1, char const *s2);

/*
** SUM			Creates a new strings with applies of the function f
** 				on each chars of string s.
** PARAM
** RETURN
*/
char				*ft_strmap(char const *s, char (*f)(char));

/*
** SUM			Creates a new string with the applies of function f on each
**				chars of the string s joined with an index.
** PARAM
** RETURN
*/
char				*ft_strmapi(char const *s, char (*f)(unsigned int, char));

/*
** SUM
** PARAM
** RETURN
*/
char				*ft_strndup(const char *s1, size_t n);

/*
** SUM
** PARAM
** RETURN
*/
char				*ft_strnew(size_t size);

/*
** SUM
** PARAM
** RETURN
*/
char				**ft_strsplit(const char *s, char c);

/*
** SUM
** PARAM
** RETURN
*/
char				*ft_strsub(char const *s, unsigned int start, size_t len);

/*
** SUM
** PARAM
** RETURN
*/
char				*ft_strtrim(char const *s);

/*
**                              [[[DELETE]]]
*/

/*
** SUM				Frees the adress of a string and sets the pointer to NULL.
** PARAM
** RETURN
*/
void				ft_strdel(char **as);

/*
**                              [[[ITERATE]]]
*/

/*
** SUM				Locates character in string.
** PARAM
** RETURN
*/
char				*ft_strchr(const char *s, int c);

/*
** SUM				Compares two strings.
** PARAM
** RETURN
*/
int					ft_strcmp(const char *s1, const char *s2);

/*
** SUM				Compares two strings and returns 1 or 0.
** PARAM
** RETURN
*/
int					ft_strequ(char const *s1, char const *s2);

/*
** SUM				Applies function f to each char of the string s.
** PARAM
** RETURN
*/
void				ft_striter(char *s, void (*f)(char *));

/*
** SUM				Applies the function f to each chars of the string s
**					joined with an index.
** PARAM
** RETURN
*/
void				ft_striteri(char *s, void (*f)(unsigned int, char *));

/*
** SUM				Calculate the length f a string.
** PARAM
** RETURN
*/
size_t				ft_strlen(const char *s);

/*
** SUM
** PARAM
** RETURN
*/
int					ft_strncmp(const char *s1, const char *s2, size_t n);

/*
** SUM
** PARAM
** RETURN
*/
int					ft_strnequ(char const *s1, char const *s2, size_t n);

/*
** SUM
** PARAM
** RETURN
*/
char				*ft_strnstr(const char *big, const char *little, \
								size_t len);

/*
** SUM
** PARAM
** RETURN
*/
char				*ft_strrchr(const char *s, int c);

/*
** SUM
** PARAM
** RETURN
*/
char				*ft_strstr(const char *big, const char *little);

/*
**                              [[[OUTPUT]]]
*/

/*
** SUM				Write the string on the output followed by a '\n'.
** PARAM
** RETURN
*/
void				ft_putendl(char const *s);

/*
** SUM				Writes the string s in the file descriptor
**					followed by a '\n'.
** PARAM
** RETURN
*/
void				ft_putendl_fd(char const *s, int fd);

/*
** SUM				Writes the string s in the output.
** PARAM
** RETURN
*/
void				ft_putstr(char const *s);

/*
** SUM				Writes the string s in the file descriptor fd.
** PARAM
** RETURN
*/
void				ft_putstr_fd(char const *s, int fd);

/*
**                              [[[TRANSFORM]]]
*/

/*
** SUM				Concatenates two strings.
** PARAM
** RETURN
*/
char				*ft_strcat(char *s1, const char *s2);

/*
** SUM
** PARAM
** RETURN
*/
void				ft_strclr(char *s);

/*
** SUM				Copied the string pointed by src
**					to the buffer pointed by dest.
** PARAM
** RETURN
*/
char				*ft_strcpy(char *dst, const char *src);

/*
** SUM				Size-bounded string copying and concatenation.
** PARAM
** RETURN
*/
size_t				ft_strlcat(char *dst, const char *src, size_t size);

/*
** SUM				Concatenate two strings at most n btyes from src and src
**					does not need to be null-terminated if it contains n or
**					more bytes.
** PARAM
** RETURN
*/
char				*ft_strncat(char *s1, const char *s2, size_t n);

/*
** SUM
** PARAM
** RETURN
*/
char				*ft_strncpy(char *dst, const char *src, size_t len);

#endif
