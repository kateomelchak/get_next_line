/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eomelcha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/20 16:15:21 by eomelcha          #+#    #+#             */
/*   Updated: 2019/06/20 20:05:31 by eomelcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int		ft_read_end_of_file(char **line, char **dest, const int fd)
{
	int		i;
	char	*tmp;

	i = 0;
	while (dest[fd][i] != '\n' && dest[fd][i])
		i++;
	if (dest[fd][i] == '\n')

}

int		ft_read_file_line(char **line, char **dest, const int fd)
{
	char	buff[BUFF_SIZE + 1];
	int		flag;
	char	*tmp;
	
	while (flag = read(fd, buff, BUFF_SIZE) > 0)
	{
		buff[flag] = '\0';
		tmp = ft_strjoin(dest[fd], buff);
		ft_strdel(&dest[fd]);
		dest[flag] = tmp;
		if (ft_strchar(buff, '\n'))
			break;
	}
	if (flag < 0 )
		return (-1);
	else if (flag == 0 && dest[fd][0] == '\0')
		return (0);
	return(ft_end_of_file(line, dest, line);
}

int		get_next_line(const int fd, char **line)
{
	static char		new[BUFF_SIZE];

	if (!line || fd < 0 || BUFF_SIZE <= 0 || fd > MAX_FD)
		return (-1);
	if (!line[fd])
		line[fd] = ft_newstr(1);
	return (ft_read_file_line(line, new, fd));
}
