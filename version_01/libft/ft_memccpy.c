/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eomelcha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/11 16:13:12 by eomelcha          #+#    #+#             */
/*   Updated: 2019/06/14 15:55:22 by eomelcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	size_t				i;
	unsigned char		l;

	i = 0;
	l = (unsigned char)c;
	while (i < n)
	{
		((char *)dest)[i] = ((char *)src)[i];
		i++;
		if (((unsigned char *)dest)[i - 1] == l)
			return (&((unsigned char *)dest)[i]);
	}
	return (NULL);
}
