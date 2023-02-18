/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klaksi <klaksi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 18:45:17 by kamelialaks       #+#    #+#             */
/*   Updated: 2023/02/18 16:52:48 by klaksi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static size_t   ft_strlen(char *str)
{
    size_t  i;

    i = 0;
    while(str[i])
        i++;
    return (i);
}

char    *ft_strjoin(char *stash, char *buff)
{
    size_t i;
    size_t j;
    char *line;

    if (!stash)
        stash = (char *)ft_calloc(1, sizeof(char));
    if (!stash || !buff)
        return (NULL);
    line = (char *)ft_calloc(ft_strlen(stash) + ft_strlen(buff) + 1, sizeof(char));
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

char    *ft_strchr(const char *s, int c)
{
    int i;

    if(!s)
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


size_t ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
    size_t len;
    size_t i;

    len = strlen(src);
    if (dstsize == 0)
        return (len);
    i = 0;
    while (i < dstsize - 1 && src[i])
    {
        dst[i] = src[i];
        i++;
    }
    dst[i] = '\0';
    return (len);
}