/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klaksi <klaksi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 18:45:14 by kamelialaks       #+#    #+#             */
/*   Updated: 2023/02/10 18:02:00 by klaksi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

#ifndef BUFFER_SIZE
# define BUFFER_SIZE 70
# endif

# include <fcntl.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include <sys/types.h>
# include <sys/uio.h>
# include <string.h>

int     ft_strlen(char *str);
void    *ft_calloc(size_t count, size_t size);
char    *ft_strjoin(char *stash, char *buff);
char	*ft_strchr(char *s, int c);
size_t ft_strlcpy(char *dst, const char *src, size_t dstsize);

int		if_newline(char *str);
char	*read_buff(char *stash, int fd);
char	*get_next_line(int fd);

#endif
