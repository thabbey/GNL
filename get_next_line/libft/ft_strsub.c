/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thabbey <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/16 09:07:25 by thabbey           #+#    #+#             */
/*   Updated: 2018/06/16 09:07:30 by thabbey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char *new_s;

	if (!s || start + len > ft_strlen(s))
		return (NULL);
	new_s = ft_strnew(len);
	if (!new_s)
		return (NULL);
	return (ft_strncpy(new_s, s + start, len));
}
