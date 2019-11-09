/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esupatae <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/19 00:07:59 by esupatae          #+#    #+#             */
/*   Updated: 2019/09/19 00:08:00 by esupatae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	char	*ans;
	size_t	i;
	size_t	len;
	size_t	res;

	i = 0;
	len = ft_strlen(dest);
	res = len + ft_strlen((char*)src);
	if (len < size && size != 0)
	{
		ans = dest + len;
		while (*src && i++ < (size - len - 1))
			*ans++ = *(char*)src++;
		*ans = '\0';
	}
	return (len < size ? res : res - len + size);
}
