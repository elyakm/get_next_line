/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klaksi <klaksi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 18:45:17 by kamelialaks       #+#    #+#             */
/*   Updated: 2023/02/10 15:38:01 by klaksi           ###   ########.fr       */
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

void    *ft_calloc(size_t element_count, size_t size)
{
	char *tab;
	int i;

	i = 0;
	tab = malloc(element_count * size);
	if(!tab)
		return(NULL);
	while(tab[i])
	{
		tab[i] = '\0';
		i++;
	}
	return (NULL);
}

char	*ft_strjoin(char *s1, char *s2)
{
	char *str;
	int i;
	int len;

	len = ft_strlen(s1) + ft_strlen(s2);
	if (!s1 || !s2)
		return (NULL);

	str = (char *)malloc((sizeof(char) * (len + 1)));
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