/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esupatae <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/18 13:39:58 by esupatae          #+#    #+#             */
/*   Updated: 2019/09/18 13:40:02 by esupatae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(char *str)
{
	size_t	len;
	char	*ptr;

	len = 0;
	if (!str)
		return (0);
	ptr = str;
	while (*ptr++)
		len++;
	return (len);
}
