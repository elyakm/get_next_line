/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils_bonus.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klaksi <klaksi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 18:45:17 by kamelialaks       #+#    #+#             */
/*   Updated: 2023/02/20 15:25:22 by klaksi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

static size_t	ft_strlen(char *str)
{
	size_t	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strjoin(char *stash, char *buff)
{
	size_t	i;
	size_t	j;
	char	*line;

	if (!stash)
		stash = (char *)ft_calloc(1, sizeof(char));
	if (!stash || !buff)
		return (NULL);
	line = ft_calloc(ft_strlen(stash) + ft_strlen(buff) + 1, sizeof(char));
	if (!line)
		return (NULL);
	i = -1;
	while (stash[++i])
		line[i] = stash[i];
	j = 0;
	while (buff[j])
		line[i++] = buff[j++];
	line[i] = '\0';
	free(stash);
	return (line);
}

char	*ft_strchr(const char *s, int c)
{
	int	i;

	if (!s)
		return (NULL);
	i = 0;
	while (s[i])
	{
		if (s[i] == (char)c)
			return ((char *)s + i);
		i++;
	}
	return (NULL);
}

char	*ft_get_line(char *stash)
{
	char	*line;
	size_t	i;

	if (!*stash)
		return (NULL);
	i = 0;
	while (stash[i] && stash[i] != '\n')
		i++;
	line = (char *)ft_calloc(i + 2, sizeof(char));
	if (!line)
		return (NULL);
	i = 0;
	while (stash[i] && stash[i] != '\n')
	{
		line[i] = stash[i];
		i++;
	}
	if (stash[i] == '\n')
		line[i++] = '\n';
	line[i] = '\0';
	return (line);
}

char	*clean_stash(char *stash)
{
	char	*line;
	size_t	i;
	size_t	j;

	i = 0;
	while (stash[i] && stash[i] != '\n')
		i++;
	if (!stash[i])
	{
		free(stash);
		return (NULL);
	}
	i++;
	line = (char *)ft_calloc(ft_strlen(stash) - i + 1, sizeof(char));
	if (!line)
		return (NULL);
	j = 0;
	while (stash[i])
		line[j++] = stash[i++];
	line[j] = '\0';
	free(stash);
	return (line);
}
