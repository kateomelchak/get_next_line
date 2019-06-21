/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eomelcha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/23 13:44:02 by eomelcha          #+#    #+#             */
/*   Updated: 2019/06/18 12:09:10 by eomelcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char			**ft_strsplit(char const *s, char c)
{
	char		**new;

	if (!s)
		return (NULL);
	new = (char **)malloc(sizeof(char*) * ft_numberofstr(s, c));
	if (!new)
		return (NULL);
	ft_multistr(new, s, c);
	return (new);
}
