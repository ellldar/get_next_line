/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esupatae <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/06 21:23:53 by esupatae          #+#    #+#             */
/*   Updated: 2019/10/06 21:23:54 by esupatae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*ans;
	size_t	size;

	if (!s1 || !s2)
		return (NULL);
	size = ft_strlen((char*)s1) + ft_strlen((char*)s2);
	if (!(ans = ft_strnew(size)))
		return (NULL);
	ft_strcat(ft_strcpy(ans, (char*)s1), (char*)s2);
	return (ans);
}
