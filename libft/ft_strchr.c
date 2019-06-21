/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eomelcha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/01 19:56:02 by eomelcha          #+#    #+#             */
/*   Updated: 2019/06/14 16:12:15 by eomelcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char *new;
	char i;

	new = (char*)s;
	i = (char)c;
	while (*new)
	{
		if (*new == i)
			return (new);
		new++;
	}
	if (*new != i)
		return (NULL);
	else
		return (new);
}
