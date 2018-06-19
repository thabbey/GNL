/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thabbey <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/16 09:02:30 by thabbey           #+#    #+#             */
/*   Updated: 2018/06/16 12:16:16 by thabbey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char *r_str;

	if (!s1 || !s2)
		return (NULL);
	r_str = ft_strnew(ft_strlen(s1) + ft_strlen(s2));
	if (!r_str)
		return (NULL);
	ft_strcpy(r_str, s1);
	return (ft_strcat(r_str, s2));
}
