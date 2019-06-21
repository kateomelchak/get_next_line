/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eomelcha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/01 19:10:03 by eomelcha          #+#    #+#             */
/*   Updated: 2019/06/14 15:58:21 by eomelcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*new;
	unsigned char	*old;
	size_t			i;

	new = (unsigned char *)s1;
	old = (unsigned char *)s2;
	i = 0;
	while (i < n && *new == *old)
	{
		new++;
		old++;
		i++;
	}
	if (i == n)
		return (0);
	return (*new - *old);
}
