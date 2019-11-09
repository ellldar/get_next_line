/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esupatae <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/29 17:53:41 by esupatae          #+#    #+#             */
/*   Updated: 2019/09/29 17:53:43 by esupatae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char		*s1;
	const unsigned char	*s2;

	if (!(dst || src) || !len)
		return (dst);
	s1 = &(*dst);
	s2 = &(*src);
	if (s1 > s2)
		while (len-- > 0)
			s1[len] = s2[len];
	else
		while (len-- > 0)
			*(s1++) = *(s2++);
	return (dst);
}
