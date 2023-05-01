/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvaz <rvaz@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 22:39:26 by rvaz              #+#    #+#             */
/*   Updated: 2023/04/30 16:03:07 by rvaz             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int	check_nl(char *str)
{
	size_t	i;

	i = -1;
	while (str[++i] && i < BUFFER_SIZE)
	{
		if (str[i] == '\n' )
			return (i);
	}
	return (-1);
}

char	*get_next_line(int fd)
{
	int			i;
	static char	buffer[BUFFER_SIZE + 1];
	char		*line;

	i = 1;
	line = NULL;
	while (i > 0)
	{
		if (!buffer[0])
			i = read(fd, buffer, BUFFER_SIZE);
		if (i > 0)
			line = ft_strjoin_nl(line, buffer);
		if (check_nl(buffer) > 0)
			break ;
	}
	return (line);
}

int	main()
{
	int i;

	i = open("text.txt", O_RDONLY);
	printf("\nBuff_size: %d\n", BUFFER_SIZE);
	printf("Line: '%s'\n", get_next_line(i));
	printf("Line: '%s'\n", get_next_line(i));
	printf("Line: '%s'\n", get_next_line(i));
	printf("Line: '%s'\n", get_next_line(i));
}