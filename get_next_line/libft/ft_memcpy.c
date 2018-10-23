/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thabbey <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/16 09:15:53 by thabbey           #+#    #+#             */
/*   Updated: 2018/06/16 09:29:40 by thabbey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	int			i;
	char		*des;
	const char	*sr;

	i = 0;
	des = dst;
	sr = src;
	while (i < (int)n)
	{
		des[i] = sr[i];
		i++;
	}
	return (dst);
}
