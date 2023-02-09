/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klaksi <klaksi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 11:58:22 by klaksi            #+#    #+#             */
/*   Updated: 2023/02/09 16:39:24 by klaksi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

// int main()
// {
// 	int fd = open("txt.txt", O_RDONLY);
// 	printf("%s\n", get_next_line(fd));
// }



int	main(void)
{
	char *s;
	int c;

	s = "kamelia";
	c = 'm';
	printf("%s\n", ft_strchr(s, c));
}