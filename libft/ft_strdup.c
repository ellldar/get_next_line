/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esupatae <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/18 16:25:41 by esupatae          #+#    #+#             */
/*   Updated: 2019/09/18 16:25:44 by esupatae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(char *src)
{
	char	*tmp;
	int		size;

	size = ft_strlen(src) + 1;
	tmp = (char*)malloc(sizeof(char) * size);
	if (!tmp)
		return (NULL);
	tmp = ft_strcpy(tmp, src);
	return (tmp);
}
