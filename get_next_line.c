/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmpofu <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/13 11:01:57 by mmpofu            #+#    #+#             */
/*   Updated: 2017/09/13 18:33:28 by mmpofu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int		get_next_line(const int fd, char **line)
{
	char		buff[BUFF_SIZE + 1];
	static char	*save;
	char		*newline;
	int			i;
	int			ret;

	newline = (char*)malloc(sizeof(char) * BUFF_SIZE);
	newline[BUFF_SIZE] = '\0';
	// check if something in save and get lines from save until no newline
	while ((ret = read(fd, buff, BUFF_SIZE)))
	{
		buff[ret] = '\0';
		ft_strcat(newline, buff);
		if (ft_strchr(newline, '\n'))
		{
			*line = ft_strjoin(*line, ft_strsub(buff, 0,
						ft_strlen(buff) - strlen(save)));
		}
		
	}
	return (0);
}

int		main()
{
	int		fd;
	char	*line;

	fd = open("text.txt", O_RDONLY);
	printf("%d", get_next_line(fd, &line));

	return (0);
}
