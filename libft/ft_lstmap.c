/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eomelcha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/13 22:40:29 by eomelcha          #+#    #+#             */
/*   Updated: 2019/06/18 10:43:25 by eomelcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*new;
	t_list	**p;

	if (lst && f)
	{
		new = NULL;
		p = &new;
		while (lst)
		{
			*p = f(lst);
			p = &((*p)->next);
			lst = lst->next;
		}
		return (new);
	}
	return (NULL);
}
