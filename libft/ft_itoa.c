/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esupatae <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/07 15:46:47 by esupatae          #+#    #+#             */
/*   Updated: 2019/10/07 15:46:49 by esupatae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
	char	*ans;
	char	*ptr;
	int		len;

	len = ft_get_int_len(n);
	ans = ft_strnew((size_t)len);
	if (!ans)
		return (NULL);
	ptr = ans;
	if (n < 0 && len-- > 0)
		*ptr++ = '-';
	while (len-- > 0)
		*ptr++ = ft_abs((n / ft_pow(10, len)) % 10) + '0';
	*ptr = '\0';
	return (ans);
}
