/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klaksi <klaksi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 11:58:22 by klaksi            #+#    #+#             */
/*   Updated: 2023/02/10 16:01:06 by klaksi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int main()
{
	int fd = open("txt.txt", O_RDONLY);
	printf("%s\n", get_next_line(fd));
}


int	main(void)
{
	char *s;
	int c;

	s = "kamelia";
	c = 'm';
	printf("%s\n", ft_strchr(s, c));
}



int main (void)
{
	char *s1;
	char *s2;
	char *str;

	s1 = "im gonna become";
	s2 = "a fucking billionnaire";
	printf("%s\n", ft_strjoin(s1, s2));
}

