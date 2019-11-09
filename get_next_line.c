/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esupatae <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/25 18:45:27 by esupatae          #+#    #+#             */
/*   Updated: 2019/10/25 18:45:29 by esupatae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static void		rem_curr(void *curr, size_t size)
{
	t_store	*elem;
	char	*rem;

	elem = (t_store*)curr;
	rem = elem->rem;
	free(elem->rem);
	elem->rem = NULL;
	ft_memset(elem, 0, size);
	free(elem);
	elem = NULL;
}

static t_list	*check_current(int fd, t_list **list)
{
	t_list	*ptr;
	t_list	*tmp;
	t_store	*elem;

	tmp = NULL;
	ptr = *list;
	while (ptr)
	{
		if (((t_store*)ptr->content)->fd == fd)
			return (ptr);
		tmp = ptr;
		ptr = ptr->next;
	}
	elem = (t_store*)malloc(sizeof(t_store));
	elem->fd = fd;
	elem->rem = NULL;
	if (tmp)
		tmp->next = ft_lstnew(elem, sizeof(t_store));
	else
		*list = ft_lstnew(elem, sizeof(t_store));
	free(elem);
	return (tmp ? tmp->next : *list);
}

static void		str_combine(t_store *elem, char *buf)
{
	char	*str;

	if (!elem->rem)
		elem->rem = ft_strnew(0);
	str = ft_strjoin(elem->rem, buf);
	free(elem->rem);
	elem->rem = str;
}

static size_t	check_line(t_store *elem, char **line, int end_of_file)
{
	char	*rem;
	size_t	len;
	size_t	diff;

	if (ft_strchr(elem->rem, '\n'))
	{
		len = ft_strchr(elem->rem, '\n') - elem->rem;
		*line = ft_strsub(elem->rem, 0, len);
		diff = ft_strlen(elem->rem) - len - 1;
		rem = ft_strsub(elem->rem, (int)(len + 1), diff);
		free(elem->rem);
		elem->rem = rem;
		return (1);
	}
	else if (end_of_file && ft_strlen(elem->rem))
	{
		*line = ft_strdup(elem->rem);
		return (1);
	}
	return (0);
}

int				get_next_line(const int fd, char **line)
{
	int				ret;
	char			buf[BUFF_SIZE + 1];
	static t_list	*list = NULL;
	t_list			*curr;
	t_store			*elem;

	if ((ret = read(fd, buf, 0)) == -1)
		return (-1);
	curr = check_current(fd, &list);
	elem = (t_store*)(curr->content);
	if (elem->rem && check_line(elem, line, 0))
		return (1);
	ft_memset(buf, 0, BUFF_SIZE + 1);
	while ((ret = read(fd, buf, BUFF_SIZE)))
	{
		buf[ret] = '\0';
		str_combine(elem, buf);
		if (check_line(elem, line, 0))
			return (1);
	}
	if (elem->rem && check_line(elem, line, 1))
		ft_lstpop(&list, &curr, &rem_curr);
	return (ft_strlen(buf) ? 1 : 0);
}
