/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esupatae <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/06 21:20:40 by esupatae          #+#    #+#             */
/*   Updated: 2019/10/06 21:20:42 by esupatae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	is_whitespace(char c)
{
	return (c == ' ' || c == '\n' || c == '\t');
}

char		*ft_strtrim(char const *s)
{
	char	*ans;
	size_t	len;

	len = 0;
	if (!s)
		return (NULL);
	while (*s && is_whitespace(*s))
		s++;
	len = ft_strlen((char*)s) - 1;
	while (*s && is_whitespace(s[len]))
		len--;
	if (!(ans = ft_strsub(s, 0, len + 1)))
		return (NULL);
	return (ans);
}
