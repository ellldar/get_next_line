/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esupatae <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/25 20:53:54 by esupatae          #+#    #+#             */
/*   Updated: 2019/09/25 20:53:57 by esupatae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char		*tmp1;
	const unsigned char	*tmp2;

	tmp1 = &(*dst);
	tmp2 = &(*src);
	if (!tmp1 && !tmp2)
		return (NULL);
	while (n-- > 0)
	{
		*tmp1++ = *tmp2;
		if (*tmp2++ == (unsigned char)c)
			return (tmp1);
	}
	return (NULL);
}
