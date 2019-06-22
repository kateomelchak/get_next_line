/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eomelcha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/01 20:20:40 by eomelcha          #+#    #+#             */
/*   Updated: 2019/06/18 10:12:13 by eomelcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	const char	*new;
	int			len;

	len = ft_strlen(s);
	new = &s[len];
	while (len >= 0)
	{
		if (*new == c)
			return ((char *)new);
		new--;
		len--;
	}
	return (NULL);
}
