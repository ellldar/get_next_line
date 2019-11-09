/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esupatae <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/19 00:35:24 by esupatae          #+#    #+#             */
/*   Updated: 2019/09/19 00:35:26 by esupatae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *str, const char *to_find)
{
	size_t	j;

	j = 0;
	while (*(char*)str)
	{
		j = 0;
		while (to_find[j])
		{
			if (*(str + j) != to_find[j])
				break ;
			j++;
		}
		if (j == ft_strlen((char*)to_find))
			return ((char*)str);
		str++;
	}
	return (*str == '\0' && *to_find == '\0' ? (char*)str : NULL);
}
