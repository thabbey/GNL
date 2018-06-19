/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thabbey <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/16 09:20:04 by thabbey           #+#    #+#             */
/*   Updated: 2018/06/16 09:20:09 by thabbey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(const char *str)
{
	int		n;
	int		sign;

	n = 0;
	while (*str == ' ' || *str == '\t' || *str == '\v' || *str == '\r' ||
			*str == '\n' || *str == '\f')
		str++;
	sign = *str == '-' ? -1 : 1;
	if (sign == -1 || *str == '+')
		str++;
	while (*str)
	{
		if (*str >= '0' && *str <= '9')
			n = n * 10 + (*str - '0');
		else
			break ;
		str++;
	}
	return (n * sign);
}
