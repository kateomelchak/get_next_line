/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eomelcha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/11 16:56:48 by eomelcha          #+#    #+#             */
/*   Updated: 2019/06/18 12:59:18 by eomelcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *lit, size_t len)
{
	char		*new;
	size_t		i;

	if (lit[0] == '\0')
		return ((char *)big);
	if (len == 0)
		return (0);
	i = ft_strlen(lit);
	new = (char *)big;
	while (1)
	{
		new = ft_strchr(new, lit[0]);
		if (!new || (big + len) <= new || (new + i) > (big + len))
			return (0);
		if (ft_strncmp(new, lit, i) == 0)
			return (new);
		new++;
	}
	return (0);
}
