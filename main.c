/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klaksi <klaksi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 11:58:22 by klaksi            #+#    #+#             */
/*   Updated: 2023/02/18 19:42:55 by klaksi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

// int main()
// {
// 	int fd = open("txt.txt", O_RDONLY);
// 	printf("%s\n", get_next_line(fd));
// }

// int	main(void)
// {
// 	char *s;
// 	int c;

// 	s = "kamelia";
// 	c = 'm';
// 	printf("%s\n", ft_strchr(s, c));
// }

// int main (void)
// {
// 	char *s1;
// 	char *s2;
// 	char *str;

// 	s1 = "im gonna become";
// 	s2 = "a fk billionnnaire";
// 	printf("%s\n", ft_strjoin(s1, s2));
// }

// int main(void)
// {
// 	size_t len;
	
// 	char src[] = "im hungryyy";
//     char dst[15];
// 	len = ft_strlcpy(dst, src, sizeof(dst));

//     printf("%s\n", src);
//     printf("%s\n", dst);
//     printf("Length of source string: %lu\n", strlen(src));
//     printf("Length returned by ft_strlcpy: %lu\n", len);

//     return 0;
// }


int	main(void)
{
	int fd;
	
	fd = open("txt.txt", O_RDONLY);
	
	printf("%s\n", get_next_line(fd));
	printf("%s\n", get_next_line(fd));
	printf("%s\n", get_next_line(fd));
	printf("%s\n", get_next_line(fd));
	printf("%s\n", get_next_line(fd));
	printf("%s\n", get_next_line(fd));
}