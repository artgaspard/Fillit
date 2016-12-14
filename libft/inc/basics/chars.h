/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   chars.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpicot <jpicot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/11 12:40:52 by jpicot            #+#    #+#             */
/*   Updated: 2016/12/12 11:43:48 by jpicot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** FILE			chars.h
** SUM			C chars management functions
**
** Functions to test, transform and print the C native chars.
*/

#ifndef LIBFT_CHARS_H
# define LIBFT_CHARS_H

/*
**								[[[CHECK]]]
*/

/*
** SUM			Test if the character is alphabetic or numeric.
** PARAM		c	Character to test
** RETURN		Return 1 if the character is alphabetic or numeric, 0 otherwise.
**
** Test if the character is alphabetic (between 'a' and 'z', or 'A' and 'Z'
** inclusive), or numeric (between '0' andi '9' inclusive)
*/
char					ft_isalnum(char c);

/*
** SUM			Test if the character is alphabetic
** PARAM		c     Character to test
** RETURN		Return 1 if the character is alphabetic, 0 otherwise.
**
** Test if the character is alphabetic (between 'a' and 'z', or 'A' and 'Z'
** inclusive)
*/
char					ft_isalpha(char c);

/*
** SUM			Test if the character is a digit
** PARAM		c	Character to test
** RETURN		Return 1 if the character is a digit, 0 otherwise.
**
** Test if the character is a digit (between '0' and '9' inclusive)
*/
char					ft_isdigit(char c);

/*
** SUM			Test if the character is valid standard ASCII char
** PARAM		c	Character to test
** RETURN		Return 1 if the character is in the ASCII table, 0 otherwise.
**
** Test if the character is in the standard ASCII table (between the 0 and the
** 127th character inclusive)
*/
char					ft_isascii(char c);

/*
** SUM			Test if the character is printable
** PARAM		c	Character to test
** RETURN		Return 1 if the character can be printed, 0 otherwise.
**
** Test if the character can be printed. A character that can't be printed
** displays nothing on output.
*/
char					ft_isprint(char c);

/*
** SUM			Test if the character is a lowercase
** PARAM		c	Character to test
** RETURN		Return 1 if the character is a lowercase, 0 otherwise.
**
** Test if the character is a lowercase (between 'a' ans 'z' inclusive)
*/
char					ft_islower(char c);

/*
** SUM			Test if the character is an uppercase
** PARAM		c	Character to test
** RETURN		Return 1 if the character is an uppercase, 0 otherwise.
**
** Test if the character is an uppercase (between 'A' ans 'Z' inclusive)
*/
char					ft_isupper(char c);

/*
**								[[[OUTPUT]]]
*/

/*
** SUM
** PARAM
** RETURN
*/
void					ft_putchr(char c);

/*
** SUM
** PARAM
** RETURN
*/
void					ft_putchr_fd(char c, int fd);

/*
** SUM
** PARAM
** RETURN
*/
void					ft_putnchr(char c, unsigned int n);

/*
** SUM
** PARAM
** RETURN
*/
void					ft_putnchr_fd(char c, unsigned int n, int fd);

/*
**								[[[TRANSFORM]]]
*/

/*
** SUM
** PARAM
** RETURN
*/
char					ft_tolower(char c);

/*
** SUM
** PARAM
** RETURN
*/
char					ft_toupper(char c);

#endif
