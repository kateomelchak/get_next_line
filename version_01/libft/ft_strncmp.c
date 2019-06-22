/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eomelcha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/23 13:42:34 by eomelcha          #+#    #+#             */
/*   Updated: 2019/06/18 10:14:19 by eomelcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned char		*str1;
	unsigned char		*str2;
	size_t				i;

	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	i = 0;
	while (i < n && *str1 == *str2 && (*str1 != '\0' || *str2 != '\0'))
	{
		str1++;
		str2++;
		i++;
	}
	if (i == n)
		return (0);
	return (*str1 - *str2);
}
