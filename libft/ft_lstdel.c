/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eomelcha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/13 22:23:00 by eomelcha          #+#    #+#             */
/*   Updated: 2019/06/13 23:53:49 by eomelcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list	*tmp;
	t_list	*new;

	if (!*alst)
		return ;
	new = *alst;
	while (new)
	{
		tmp = new;
		new = new->next;
		ft_lstdelone(&tmp, del);
	}
	*alst = (NULL);
}
