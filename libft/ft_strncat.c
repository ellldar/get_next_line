/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esupatae <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/19 00:01:44 by esupatae          #+#    #+#             */
/*   Updated: 2019/09/19 00:01:46 by esupatae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *dest, const char *src, size_t nb)
{
	char	*ans;
	size_t	i;

	i = ft_strlen(dest);
	ans = dest + i;
	i = 0;
	while (*src && i++ < nb)
		*ans++ = *(char*)src++;
	*ans = '\0';
	return (dest);
}
