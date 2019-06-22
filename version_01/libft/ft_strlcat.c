/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eomelcha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/01 20:06:25 by eomelcha          #+#    #+#             */
/*   Updated: 2019/06/18 10:16:43 by eomelcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	unsigned int	i;
	int				flag;

	i = 0;
	flag = 0;
	while (*dst && i < size)
	{
		dst++;
		i++;
	}
	while (*src)
	{
		if (i < (size - 1) && size != 0)
		{
			*dst = *src;
			dst++;
			flag = 1;
		}
		src++;
		i++;
	}
	if (flag == 1)
		*dst = '\0';
	return (i);
}
