/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esupatae <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/18 22:26:30 by esupatae          #+#    #+#             */
/*   Updated: 2019/09/18 22:26:32 by esupatae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dest, char *src, size_t len)
{
	size_t	i;

	i = 0;
	while (src[i] && i++ < len)
		dest[i - 1] = src[i - 1];
	if (ft_strlen(src) < len)
		ft_bzero((dest + i), len - ft_strlen(src));
	return (dest);
}
