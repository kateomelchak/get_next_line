/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eomelcha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/01 19:23:09 by eomelcha          #+#    #+#             */
/*   Updated: 2019/06/18 13:13:09 by eomelcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*csrc;
	char	*cdst;

	csrc = (char *)src;
	cdst = (char *)dest;
	if (csrc == cdst || n == 0)
		return (dest);
	while (n > 0)
	{
		if (cdst < csrc)
		{
			*cdst = *csrc;
			cdst++;
			csrc++;
			n--;
		}
		else
		{
			cdst[n - 1] = csrc[n - 1];
			n--;
		}
	}
	return (dest);
}
