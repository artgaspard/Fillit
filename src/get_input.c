/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_input.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpicot <jpicot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/03 17:40:05 by jpicot            #+#    #+#             */
/*   Updated: 2016/12/09 11:35:34 by jpicot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

static int	read_input(int fd, char ***dst)
{
	int		ret;
	int		error;
	char	*buf;

	error = 0;
	if (!(buf = (char *)malloc(sizeof(char) * (BUFF_SIZE + 1))))
		return (0);
	while ((ret = read(fd, buf, BUFF_SIZE)))
	{
		error++;
		buf[ret] = '\0';
		if (error == 1)
			**dst = ft_strdup(buf);
		else
			**dst = ft_strjoin(**dst, buf);
	}
	if (!error)
		return (0);
	free(buf);
	return (1);
}

int			opcl_input(char *source_file, char **dst)
{
	int		fd;

	if ((fd = open(source_file, O_RDONLY)) == -1)
		return (0);
	if (!(read_input(fd, &dst)))
		return (0);
	if (close(fd) == -1)
		return (0);
	return (1);
}
