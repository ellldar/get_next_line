/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esupatae <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/18 23:46:26 by esupatae          #+#    #+#             */
/*   Updated: 2019/09/18 23:46:29 by esupatae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcat(char *dest, const char *src)
{
	char	*ans;
	size_t	i;

	i = ft_strlen(dest);
	ans = dest + i;
	while (*src)
		*ans++ = *(char*)src++;
	*ans = '\0';
	return (dest);
}
