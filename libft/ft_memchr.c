/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eomelcha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/01 18:59:45 by eomelcha          #+#    #+#             */
/*   Updated: 2019/06/14 15:56:40 by eomelcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char *new;

	new = (unsigned char *)s;
	while (n > 0)
	{
		if (*new != (unsigned char)c)
		{
			n--;
			new++;
		}
		else
			return (new);
	}
	return (NULL);
}
