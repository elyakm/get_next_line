/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klaksi <klaksi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 18:43:50 by kamelialaks       #+#    #+#             */
/*   Updated: 2023/02/20 15:25:05 by klaksi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

void	*ft_calloc(size_t element_count, size_t size)
{
	char	*tab;
	size_t	i;

	i = 0;
	tab = (void *)malloc(element_count * size);
	if (!tab)
		return (NULL);
	while (i < (element_count * size))
	{
		tab[i] = 0;
		i++;
	}
	return ((void *)tab);
}

static char	*read_buff(char *stash, int fd)
{
	char	*buff;
	int		return_value;

	buff = (char *)ft_calloc(BUFFER_SIZE + 1, sizeof(char));
	if (!buff)
		return (NULL);
	return_value = 1;
	while (!ft_strchr(stash, '\n') && return_value != 0)
	{
		return_value = read(fd, buff, BUFFER_SIZE);
		if (return_value == -1)
		{
			free(buff);
			free(stash);
			return (NULL);
		}
		buff[return_value] = '\0';
		stash = ft_strjoin(stash, buff);
	}
	free(buff);
	return (stash);
}

char	*get_next_line(int fd)
{
	static char	*stash[OPEN_MAX];
	char		*line;

	if (fd < 0 || fd >= 1024 || BUFFER_SIZE <= 0)
		return (NULL);
	stash[fd] = read_buff(stash[fd], fd);
	if (!stash[fd])
		return (NULL);
	line = ft_get_line(stash[fd]);
	stash[fd] = clean_stash(stash[fd]);
	return (line);
}
