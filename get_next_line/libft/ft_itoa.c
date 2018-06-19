/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thabbey <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/16 08:56:54 by thabbey           #+#    #+#             */
/*   Updated: 2018/06/16 12:11:56 by thabbey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	num_len(int n)
{
	size_t			len;

	len = 1;
	while (n /= 10)
		len++;
	return (len);
}

char			*ft_itoa(int n)
{
	char			*s;
	size_t			nlen;
	unsigned int	number;

	nlen = num_len(n);
	number = n;
	if (n < 0)
	{
		number = -n;
		nlen++;
	}
	if (!(s = ft_strnew(nlen)))
		return (NULL);
	s[--nlen] = number % 10 + '0';
	while (number /= 10)
		s[--nlen] = number % 10 + '0';
	if (n < 0)
		*(s + 0) = '-';
	return (s);
}
