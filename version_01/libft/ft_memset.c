/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eomelcha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/15 16:32:33 by eomelcha          #+#    #+#             */
/*   Updated: 2019/06/18 13:02:38 by eomelcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*new;
	size_t			i;

	i = 0;
	new = (unsigned char *)s;
	while (i < n)
	{
		new[i] = (unsigned char)c;
		i++;
	}
	return (s);
}
