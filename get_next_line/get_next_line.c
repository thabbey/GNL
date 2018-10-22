/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thabbey <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/12 13:14:24 by thabbey           #+#    #+#             */
/*   Updated: 2018/06/19 14:45:19 by thabbey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include "./libft/libft.h"

static int	endline(char *buff)
{
	int		i;

	i = 0;
	while (buff[i] != ENDOFL && buff[i])
		i++;
	if (buff[i] == ENDOFL)
	{
		buff[i] = END;
		return (i);
	}
	else
		return (-1);
}

static char	*join(char *buff, char *buz)
{
	size_t	i;
	size_t	j;
	char	*ptr;

	i = 0;
	j = 0;
	if (buff)
		i = ft_strlen(buff);
	if (buz)
		j = ft_strlen(buz);
	ptr = (char *)malloc(sizeof(*ptr) * (i + j + 1));
	ft_memcpy(ptr, buff, i);
	ft_memcpy(ptr + i, buz, j);
	ptr[i + j] = '\0';
	free(buff);
	ft_bzero(buz, BUFF_SIZE + 1);
	return (ptr);
}

static int	verif(char **buff, char **buz, char **line)
{
	char	*ptr;
	int		final;

	*buff = join(*buff, *buz);
	final = endline(*buff);
	if (final > -1)
	{
		*line = ft_strdup(*buff);
		ptr = *buff;
		*buff = ft_strdup(*buff + final + 1);
		free(ptr);
		return (1);
	}
	return (0);
}

int			get_next_line(int const fd, char **line)
{
	static char		*buff[12000];
	char			*tmp;
	int				ret;
	int				result;

	tmp = ft_strnew(BUFF_SIZE);
	if (!line || BUFF_SIZE <= 0 || fd < 0 || (ret = read(fd, tmp, 0)) < 0)
		return (-1);
	while ((ret = read(fd, tmp, BUFF_SIZE)) > 0)
	{
		result = verif(&buff[fd], &tmp, line);
		free(tmp);
		if (result == 1)
			return (1);
		tmp = ft_strnew(BUFF_SIZE);
	}
	if ((result = verif(&buff[fd], &tmp, line)))
		return (1);
	else if (ft_strlen(buff[fd]) > 0)
	{
		*line = ft_strdup(buff[fd]);
		ft_strdel(&buff[fd]);
		return (1);
	}
	return (result);
}
