/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eomelcha <eomelcha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/20 20:05:42 by eomelcha          #+#    #+#             */
/*   Updated: 2019/06/21 18:40:02 by eomelcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <fcntl.h>
#include "get_next_line.h"

int		main(int argc, char **argv)
{
	char   *line;
	int		fd;
	int		i;

	i = 1;
	if (argc == 1)
	{
		while (get_next_line(0, &line) > 0)
		{
			printf("%s\n", line);
			ft_strdel(&line);
		}
	}
	else if ( argc > 1)
	{
		while (i < argc)
		{ 
			fd = open(argv[i], O_RDONLY);
			if (fd < 0)
				return (-1);
			else
			{
				while (get_next_line(fd, &line) > 0)
				{
					printf("%s\n", line);
					ft_strdel(&line);
				}
			}
			i++;
		}
	}
	system("leaks gnl");
	return (0);
}
