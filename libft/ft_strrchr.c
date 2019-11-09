/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esupatae <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/23 02:08:27 by esupatae          #+#    #+#             */
/*   Updated: 2019/09/23 02:08:29 by esupatae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	char	*tmp;

	tmp = (0);
	while (*str)
	{
		if (*str == c)
			tmp = (char*)str;
		str++;
	}
	if (c == '\0')
		return ((char*)str);
	return (tmp);
}
