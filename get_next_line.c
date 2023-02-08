/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klaksi <klaksi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 18:43:50 by kamelialaks       #+#    #+#             */
/*   Updated: 2023/02/08 15:55:56 by klaksi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

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

char    *ft_strjoint(char *src, char *dest)
{
    char    *str;
}


char	*get_next_line(int fd)
{
    char *stash;
    
    stash = malloc(BUFFER_SIZE + 1 * sizeof(char));
    if (!stash)
        return(NULL);
    read(fd, stash, BUFFER_SIZE);
    return (stash);
}
