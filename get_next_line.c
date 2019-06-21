/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eomelcha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/20 16:15:21 by eomelcha          #+#    #+#             */
/*   Updated: 2019/06/21 14:49:42 by eomelcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int		ft_find_end(char **line, char **dest, const int fd)
{
	int	i;
	char	*tmp;
	
	i = 0;
	while (dest[fd][i] = '\n' &&  dest[fd][i])
		i++;
	if (dest[fd][i] == '\n')
	{
		*line = ft_strsub(dest[fd], 0, i);
		tmp = ft_strdup(&dest[fd][i + 1]);
		ft_strdel(&dest[fd]);
		dest[fd] = tmp;
	}
	else 
	{
		*line = ft_strsub(dest[fd]);
		ft_strdel(dest[fd]);
	}
	return (1);
}

int		ft_read_src(char **line, char **dest, const int fd)
{
	char	*tmp;
	int	flag;
	char	buff[BUFF_SIZE + 1];

	flag = read(fd, buff, BUFF_SIZE);
	if (flag < 0)
		return (-1);
	else if (flag == 0 && dest[fd][0] == '\0')
		return (0);
	while (flag > 0)
	{
		buff[flag] = '\0';
		tmp = ft_strjoin(dest[fd], buff);
		ft_strdel(&dest[fd]);
		dest[fd] = tmp;
		if (ft_strchr(buff, '\n'))
			break;
	}
	return (ft_find_line(line, dest, fd);
}

int		get_next_line(const int fd, char **line)
{
	static char	*dest[FD_MAX]

	if (!line || fd < 0 || fd > FD_MAX || BUFF_SIZE <= 0)
		return (-1);
	if (!dest[fd])
	{
		dest[fd] = ft_strnew(1);
	}
	return (ft_read_src(line, dest, fd));
}
