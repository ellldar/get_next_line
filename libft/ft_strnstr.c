/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esupatae <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/19 13:38:20 by esupatae          #+#    #+#             */
/*   Updated: 2019/09/19 13:38:24 by esupatae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *to_find, size_t nb)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (*to_find == '\0')
		return ((char*)str);
	while (*str && i + ft_strlen((char*)to_find) <= nb)
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
		i++;
		str++;
	}
	return (*str == '\0' && *to_find == '\0' ? (char*)str : NULL);
}
