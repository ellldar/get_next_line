/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esupatae <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/25 02:51:26 by esupatae          #+#    #+#             */
/*   Updated: 2019/09/25 02:51:29 by esupatae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char		*tmp1;
	const unsigned char *tmp2;

	tmp1 = &(*dst);
	tmp2 = &(*src);
	if (!tmp1 && !tmp2)
		return (NULL);
	while (n-- > 0)
		*(tmp1++) = *(tmp2++);
	return (dst);
}
