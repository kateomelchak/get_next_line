/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eomelcha <eomelcha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/20 16:15:21 by eomelcha          #+#    #+#             */
/*   Updated: 2019/06/24 18:54:06 by eomelcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int	ft_find_end(const int fd, char **line, char **dest)
{
	int		i;
	char	*tmp;

	i = 0;
	while (dest[fd][i] != '\n' && dest[fd][i])
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
		*line = ft_strdup(dest[fd]);
		ft_strdel(&dest[fd]);
	}
	return (1);
}

int	ft_save_to_stack(const int fd, char **line, char **dest)
{
	char	buff[BUFF_SIZE + 1];
	char	*tmp;
	int		flag;

	while ((flag = read(fd, buff, BUFF_SIZE)) > 0)
	{
		buff[flag] = '\0';
		tmp = ft_strjoin(dest[fd], buff);
		ft_strdel(&dest[fd]);
		dest[fd] = tmp;
		if (ft_strchr(buff, '\n'))
			break ;
	}
	if (flag < 0)
		return (-1);
	else if (flag == 0 && dest[fd][0] == '\0')
		return (0);
	return (ft_find_end(fd, line, dest));
}

int	get_next_line(const int fd, char **line)
{
	static char		*dest[FD_MAX];

	if (!line || fd < 0 || fd > FD_MAX || BUFF_SIZE <= 0)
		return (-1);
	if (!dest[fd])
		dest[fd] = ft_strnew(1);
	return (ft_save_to_stack(fd, line, dest));
}
