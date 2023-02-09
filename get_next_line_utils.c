/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klaksi <klaksi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 18:45:17 by kamelialaks       #+#    #+#             */
/*   Updated: 2023/02/09 16:39:43 by klaksi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int ft_strlen(char *str)
{
    int i;
    
    i = 0;
    while(str[i])
        i++;
    return (i);
}

void    *ft_calloc(size_t count, size_t size)
{
    void *ptr;
    int i;
    
    ptr = malloc(size * count) * sizeof(char);
    if(!ptr)
        return (NULL);

    i = 0;
    while (ptr[i] < (count * size))
        ptr[i++] = 0;
    return ((void *)ptr);
}

char    *ft_strjoint(char *stash, char *buff)
{
    char    *str;
	size_t	i;
	size_t	j;

	if (!stash)
		stash = (char *)ft_calloc(1, sizeof(char));
    if (!stash || !buff)
        return (NULL);
        
    str = (char *)ft_calloc(ft_strlen(stash) + ft_strlen(buff) + 1);
	if (!str)
		return(NULL);
        
	i = 0;
	while(stash[i])
	{
		str[i] = stash[i];
		i++;
	}
	j = 0;
    
	while (buff[j])
		str[i++] = buff[j++];
	str[i] = '\0';
	return (str);
}

char	*ft_strchr(char *s, int c)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == (char)c)
			return ((char *)s + i);
	i++;
	}
	if (s[i] == (char)c)
		return ((char *)s + i);
	return (NULL);
}