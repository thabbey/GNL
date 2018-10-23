/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thabbey <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/16 09:16:16 by thabbey           #+#    #+#             */
/*   Updated: 2018/06/16 12:12:16 by thabbey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	char *d;
	char *s;

	d = (char *)dst;
	s = (char *)src;
	while (n--)
	{
		*d = *s;
		d++;
		if (*s == (char)c)
			return ((void *)d);
		s++;
	}
	return (NULL);
}
