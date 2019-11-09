/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esupatae <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/01 21:48:55 by esupatae          #+#    #+#             */
/*   Updated: 2019/10/01 21:49:24 by esupatae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char	*res;
	char	*ptr;
	size_t	i;

	i = 0;
	res = (char*)malloc(sizeof(char) * (size + 1));
	ptr = res;
	if (!res)
		return (NULL);
	while (i++ < size + 1)
		*res++ = '\0';
	return (ptr);
}
