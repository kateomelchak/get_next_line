/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eomelcha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/11 16:38:52 by eomelcha          #+#    #+#             */
/*   Updated: 2019/06/14 17:03:20 by eomelcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	char		*old;
	char		*new;

	if (*needle == '\0')
		return ((char *)haystack);
	while (*haystack)
	{
		old = (char *)haystack;
		new = (char *)needle;
		while (*new && *new == *old)
		{
			new++;
			old++;
		}
		if (*new == '\0')
			return ((char *)haystack);
		haystack++;
	}
	return (NULL);
}
