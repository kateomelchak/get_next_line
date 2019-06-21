/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eomelcha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/23 13:44:57 by eomelcha          #+#    #+#             */
/*   Updated: 2019/06/18 14:25:10 by eomelcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	unsigned int	start;
	unsigned int	len;

	if (!s)
		return (0);
	start = 0;
	while (ft_iswhitechar(s[start]))
	{
		start++;
	}
	start = (ft_skipstr((char *)s));
	len = ft_strlen(s);
	while (len > start && ft_iswhitechar(s[len - 1]))
	{
		len--;
	}
	return (ft_strsub(s, start, len - start));
}
