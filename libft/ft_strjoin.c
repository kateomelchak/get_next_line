/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eomelcha <eomelcha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/28 02:18:26 by eomelcha          #+#    #+#             */
/*   Updated: 2019/06/24 16:51:09 by eomelcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strjoin(char const *s1, char const *s2)
{
	size_t		i;
	char		*new;

	if (!s1 || !s2)
		return (NULL);
	new = (ft_strnew(ft_strlen(s1) + ft_strlen(s2)));
	if (!new)
		return (NULL);
	i = 0;
	while (*s1)
	{
		new[i] = *s1;
		s1++;
		i++;
	}
	while (*s2)
	{
		new[i] = *s2;
		s2++;
		i++;
	}
	new[i] = '\0';
	return (new);
}
