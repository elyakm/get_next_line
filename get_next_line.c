/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klaksi <klaksi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 18:43:50 by kamelialaks       #+#    #+#             */
/*   Updated: 2023/02/08 18:07:13 by klaksi           ###   ########.fr       */
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

int		if_newline(char *str)
{
	size_t	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == '\n');
			return (1);
	}
	return (0);
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
    
	if (!stush)
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
		str[i++] = buff[j++]
	str[i] = '\0';
	return (str);
}

char	*read_buff(char *stash, int fd)
{
	char 	*buff;
	
	buff = (char *)calloc(BUFFER_SIZE + 1, sizeof(char));
	while (if_newline(stash) == 0)
	{
		read(fd, buff, BUFFER_SIZE);
		
	}
}

char	*get_next_line(int fd)
{
    char *stash;

    if (!stash)
        return(NULL);
    stash = read_buff();
    return (stash);
}
