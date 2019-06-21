/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eomelcha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/28 04:56:55 by eomelcha          #+#    #+#             */
/*   Updated: 2019/06/18 10:40:46 by eomelcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char		*ft_straddchar(char *str, int n)
{
	if (n > 9)
		str = ft_straddchar(str, n / 10);
	*str = (n % 10) + '0';
	return (str + 1);
}

char			*ft_itoa(int n)
{
	char	*new;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	new = ft_strnew(11);
	if (!new)
		return (NULL);
	if (n < 0)
	{
		new[0] = '-';
		ft_straddchar(new + 1, -n);
		return (new);
	}
	ft_straddchar(new, n);
	return (new);
}
