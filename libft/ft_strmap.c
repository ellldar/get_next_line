/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esupatae <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/04 15:38:29 by esupatae          #+#    #+#             */
/*   Updated: 2019/10/04 15:38:31 by esupatae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	char	*ptr;
	char	*ans;

	if (!s || !*s || !f)
		return (NULL);
	if (!(ans = ft_memalloc(ft_strlen((char*)s) + 1)))
		return (NULL);
	ptr = ans;
	while (*(char*)s)
		*ptr++ = f(*s++);
	*ptr = '\0';
	return (ans);
}
