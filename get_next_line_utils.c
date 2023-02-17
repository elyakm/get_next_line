/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klaksi <klaksi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 18:45:17 by kamelialaks       #+#    #+#             */
/*   Updated: 2023/02/17 18:09:04 by klaksi           ###   ########.fr       */
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


char    *ft_strjoin(char *s1, char *s2)
{
    char *str;
    size_t i;
    int len;

    len = ft_strlen(s1) + ft_strlen(s2);
    if (!s1 || !s2)
        return (NULL);

    str = ft_calloc(sizeof(char), (len + 1));
    i = 0;
    while (s1[i])
    {
        str[i] = s1[i];
        i++;
    }
    
    i = 0;
    while (s2[i])
    {
        str[ft_strlen(s1) + i] = s2[i];
        i++;
    }
    str[len] = '\0';
    return (str);
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