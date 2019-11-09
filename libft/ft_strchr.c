/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esupatae <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/23 01:14:09 by esupatae          #+#    #+#             */
/*   Updated: 2019/09/23 01:14:11 by esupatae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	char	*ptr;

	ptr = (char*)str;
	while (*ptr)
	{
		if (*ptr == c)
			return ((char*)ptr);
		ptr++;
	}
	if (c == '\0')
		return ((char*)str);
	return (NULL);
}
