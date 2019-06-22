/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eomelcha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/23 13:43:24 by eomelcha          #+#    #+#             */
/*   Updated: 2019/06/13 13:31:44 by eomelcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char *new;

	new = (char *)malloc(size + 1);
	if (new)
	{
		ft_memset(new, '\0', (size + 1));
		return (new);
	}
	else
		return (NULL);
}
