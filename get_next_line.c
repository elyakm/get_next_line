/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klaksi <klaksi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 18:43:50 by kamelialaks       #+#    #+#             */
/*   Updated: 2023/02/10 16:10:34 by klaksi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

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
