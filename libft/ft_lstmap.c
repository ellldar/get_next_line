/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esupatae <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/10 02:42:28 by esupatae          #+#    #+#             */
/*   Updated: 2019/10/10 02:43:16 by esupatae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*ans;
	t_list	*ptr;

	ans = NULL;
	ptr = NULL;
	if (lst && f)
		while (lst)
		{
			if (!ans)
			{
				ans = f(lst);
				ptr = ans;
			}
			else
			{
				ans->next = f(lst);
				ans = ans->next;
			}
			lst = lst->next;
		}
	return (ptr);
}
