/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thabbey <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/16 09:03:54 by thabbey           #+#    #+#             */
/*   Updated: 2018/06/16 12:16:56 by thabbey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	char	*new_s;
	int		i;

	if (!s || !f)
		return (NULL);
	new_s = ft_strnew(ft_strlen(s));
	if (!new_s)
		return (NULL);
	i = -1;
	while (s[++i])
		new_s[i] = f(s[i]);
	return (new_s);
}
