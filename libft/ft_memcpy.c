/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eomelcha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/18 14:01:45 by eomelcha          #+#    #+#             */
/*   Updated: 2019/06/18 14:02:01 by eomelcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char	*new;
	char	*old;

	if (!dest && !src)
		return (NULL);
	new = (char *)dest;
	old = (char *)src;
	while (n > 0)
	{
		*new = *old;
		new++;
		old++;
		n--;
	}
	return (dest);
}
