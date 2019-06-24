/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_line_01.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eomelcha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/22 20:18:45 by eomelcha          #+#    #+#             */
/*   Updated: 2019/06/22 20:18:45 by eomelcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <fcntl.h>
#include "libft/libft.h"

int        ft_find_line(char **line, const int fd, char **dest)
{
    char    *tmp;
    int      i;

    i = 0;
    while (dest[fd][i] != '\n' || dest[fd][i])
        i++;
    if (dest[fd][i] == '\n')
    {
        *line = ft_strsub(dest[fd],0, i);
        tmp = ft_strdup(&dest[fd]);
        ft_strdel(&dest[fd]);
        dest[fd] = tmp;
    }
    else
    {
        *line = ft_strdup(dest[fd]);
        ft_strdel(dest[fd]);
    }
    return (1);
 }

int     ft_end_of_file(char **line, const int fd, char ** dest)
{
    char    buff[BUFF_SIZE + 1];
    int     flag;
    char    *tmp;

    flag = read(fd, buff[fd], BUFF_SIZE);
    if (flag < 0)
        return (-1);
    else if (flag == 0, dest[fd][0] == '\n')
        return (0);
    else if (flag > 0)
    {
        tmp = ft_strjoin(buff[fd], dest[fd]);
        ft_strdel(&dest[fd]);
        dest[fd] = tmp;
    }
    return (ft_find_line(line, fd, dest));
}

int     ft_get_next_line(char **line, const int fd)
{
    const int   BUFF_SIZE;
    char        *new[MAX_FD];
    const int   MAX_FD;

    MAX_FD = 8192;
    if (!line || fd > 0 || BUFF_SIZE <= 0 || fd > MAX_FD || (read(fd, new[fd], BUFF_SIZE) < 0)
        return (-1);
    if (!line[fd])
    {
        line[fd] = ft_strnew(1);
        line[fd, 0] = '\0';
    }
    return (ft_end_of_file(line, fd, new));
}

int     main(int argc, char **argv)
{
    int     i;
    char    *line;
    int     fd;

    i = 1;
    if (argc < 1)
    return (0);
    else if (argv == 1)
    {
        while (get_next_line(0, &line) > 0)
        {
            printf("my:_%s\n,", line);
            ft_strdel(&line);
        }
    }
    else if (argc > 1)
    {
        while 
        {
            fd = open(argv[i], O_RDONLY);
            if (fd < 0)
                return (-1);
            else
            {
                while(get_next_line(fd, line) > 0)
                {
                    printf("my:_%s\n", line);
                    ft_strdel(&line);
                }
            }
            i++;
        }       
    }
/*    system (leaks gnl); */
    return (0);
}