/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_multistr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eomelcha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/18 12:24:48 by eomelcha          #+#    #+#             */
/*   Updated: 2019/06/18 12:35:17 by eomelcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_multistr(char **str, char const *s, char c)
{
	char		**new;
	char		*a;
	char		*b;

	new = str;
	a = (char *)s;
	b = 0;
	while (*a)
	{
		if ((*a != c) && ((*(a - 1) == c) || a == s))
			b = a;
		else if (b && *a == c && *(a - 1) != c)
		{
			*new = ft_strnew(a - b);
			ft_strncpy(*new, b, a - b);
			b = 0;
			new++;
		}
		a++;
	}
	if (b)
		*new++ = ft_strdup(b);
	*new = NULL;
}
