/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esupatae <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/30 21:23:13 by esupatae          #+#    #+#             */
/*   Updated: 2019/09/30 21:23:15 by esupatae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	is_ok_char(char c)
{
	static int	chrs[] = {0, 9, 10, 11, 12, 13, 32};
	int			i;
	int			is_ok;

	i = 0;
	is_ok = 0;
	while (i < 7)
	{
		if (c == (char)chrs[i])
			is_ok = 1;
		i++;
	}
	return (is_ok);
}

int			ft_atoi(const char *str)
{
	int	result;
	int	is_negative;

	result = 0;
	is_negative = 1;
	while (is_ok_char(*str))
		str++;
	if (*str == '-' || *str == '+')
		if (*str++ == '-')
			is_negative = -1;
	while (*str >= '0' && *str <= '9')
		result = (result * 10) + (*str++ - 48);
	return (result * is_negative);
}
