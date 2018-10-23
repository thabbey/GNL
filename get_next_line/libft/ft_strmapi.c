/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thabbey <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/16 09:04:11 by thabbey           #+#    #+#             */
/*   Updated: 2018/06/16 12:17:17 by thabbey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*new_s;
	size_t	i;

	if (!s || !f)
		return (NULL);
	new_s = ft_strnew(ft_strlen(s));
	if (!new_s)
		return (NULL);
	i = -1;
	while (s[++i])
		new_s[i] = f(i, s[i]);
	return (new_s);
}
