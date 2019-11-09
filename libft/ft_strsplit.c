/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esupatae <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/07 21:46:05 by esupatae          #+#    #+#             */
/*   Updated: 2019/10/07 21:46:41 by esupatae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	del_node(void *ct, size_t ct_size)
{
	free(ct);
	ct_size = 0;
}

static char	*get_word(char **ptr, int *nb, char c)
{
	char	*ans;

	if (!ptr || !*ptr)
		return (NULL);
	*nb += 1;
	if (ft_strchr(*ptr, c) > *ptr)
	{
		ans = ft_strsub(*ptr, 0, (size_t)(ft_strchr(*ptr, c) - *ptr));
		if (!ans)
			return (NULL);
	}
	else if (ft_strchr(*ptr, '\0') > *ptr)
	{
		ans = ft_strdup(*ptr);
		if (!ans)
			return (NULL);
	}
	else
		ans = NULL;
	*ptr += ft_strlen(ans);
	return (ans);
}

static void	add_word(t_list **list, char **str)
{
	t_list	*cur;

	cur = *list;
	if (cur)
	{
		while (cur->next)
			cur = cur->next;
		cur->next = ft_lstnew(*str, ft_strlen(*str) + 1);
		cur = cur->next;
	}
	else
		cur = ft_lstnew(*str, ft_strlen(*str) + 1);
	ft_strdel(str);
	if (!*list)
		*list = cur;
}

static char	**assign_words(t_list *list, char **ans)
{
	t_list	*cur;
	char	**ptr;

	cur = list;
	ptr = ans;
	while (cur)
	{
		*ptr = ft_strdup(cur->content);
		if (!(*ptr))
			return (NULL);
		cur = cur->next;
		ptr++;
	}
	*ptr = NULL;
	return (ans);
}

char		**ft_strsplit(char const *s, char c)
{
	char	**ans;
	char	*word;
	int		count;
	char	*ptr;
	t_list	*list;

	if (!s)
		return (NULL);
	ptr = (char*)s;
	list = NULL;
	count = 0;
	while (*ptr)
		if ((ft_skip_char(&ptr, c)))
			if ((word = get_word(&ptr, &count, c)))
				add_word(&list, &word);
	if (!(ans = (char**)malloc(sizeof(char*) * (count + 1))))
		return (NULL);
	if (!(ans = assign_words(list, ans)))
		return (NULL);
	ft_lstdel(&list, &del_node);
	return (ans);
}
