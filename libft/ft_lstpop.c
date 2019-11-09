/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstpop.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esupatae <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/04 15:59:55 by esupatae          #+#    #+#             */
/*   Updated: 2019/11/04 16:00:43 by esupatae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_elems(t_list **alst)
{
	t_list	*curr;
	int		count;

	curr = *alst;
	count = 0;
	while (curr)
	{
		curr = curr->next;
		count++;
	}
	return (count);
}

void		ft_lstpop(t_list **alst, t_list **elem, void (*del)(void *, size_t))
{
	t_list	*prev;
	t_list	*curr;

	if (!alst || !elem || !del)
		return ;
	if (count_elems(alst) == 1)
	{
		ft_lstdel(alst, del);
		*elem = *alst;
	}
	else
	{
		prev = NULL;
		curr = *alst;
		while (curr && curr != *elem)
		{
			prev = curr;
			curr = curr->next;
		}
		if (prev)
			prev->next = curr ? curr->next : NULL;
		ft_lstdelone(elem, del);
	}
}
