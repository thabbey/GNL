/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strndup.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thabbey <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/16 09:05:06 by thabbey           #+#    #+#             */
/*   Updated: 2018/06/16 10:23:39 by thabbey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strndup(const char *s1, size_t n)
{
	char *memdup;

	if (!(memdup = ft_strnew(n)))
		return (NULL);
	ft_strncpy(memdup, s1, n);
	return (memdup);
}
