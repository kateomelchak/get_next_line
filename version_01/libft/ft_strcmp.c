/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eomelcha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/23 13:16:01 by eomelcha          #+#    #+#             */
/*   Updated: 2019/06/18 10:13:07 by eomelcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strcmp(const char *s1, const char *s2)
{
	unsigned char	*str1;
	unsigned char	*str2;
	int				i;

	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	while (*str1 == *str2 && (*str1 != '\0' || *str2 != '\0'))
	{
		str1++;
		str2++;
	}
	i = *str1 - *str2;
	return (i);
}
