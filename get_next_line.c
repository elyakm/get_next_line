/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klaksi <klaksi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 18:43:50 by kamelialaks       #+#    #+#             */
/*   Updated: 2023/02/08 14:41:22 by klaksi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char    *ft_strjoint(char *src, char *dest)
{
    char    *str;
    
    str = calloc()
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
