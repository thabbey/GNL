/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thabbey <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/16 09:07:05 by thabbey           #+#    #+#             */
/*   Updated: 2018/06/16 09:07:12 by thabbey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	size_t slen;

	slen = ft_strlen(needle);
	if (!*needle)
		return ((char *)haystack);
	while (*haystack)
		if (!ft_memcmp(haystack++, needle, slen))
			return ((char *)haystack - 1);
	return (0);
}
