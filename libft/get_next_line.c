/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kris <kris@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/10 08:29:52 by ktrout            #+#    #+#             */
/*   Updated: 2020/05/16 10:36:39 by kris             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	read_fd(int fd, char **str)
{
	char	*buff;
	char	*hold;
	int		bytes;

	if (!(buff = ft_strnew(sizeof(char) * BUFF_SIZE + 1)))
		return (-1);
	bytes = read(fd, buff, BUFF_SIZE);
	if (bytes > 0)
	{
		buff[bytes] = '\0';
		hold = ft_strjoin(*str, buff);
		if (!hold)
			return (-1);
		free(*str);
		*str = hold;
	}
	free(buff);
	return (bytes);
}

static int	get_line(char **line, char **endline, char **str)
{
	*line = ft_strsub(*str, 0, ft_strlen(*str) - ft_strlen(*endline));
	*endline = ft_strdup(*endline + 1);
	free(*str);
	*str = *endline;
	return (1);
}

int			get_next_line(const int fd, char **line)
{
	static char	*str;
	char		*endline;
	int			bytes;

	if ((!str && (str = ft_strnew(sizeof(*str))) == NULL) || !line)
		return (-1);
	endline = ft_strchr(str, '\n');
	while (endline == NULL)
	{
		if ((bytes = read_fd(fd, &str)) == 0)
		{
			if (ft_strlen(str) == 0)
				return (0);
			str = ft_strjoin(str, "\n");
		}
		if (bytes < 0)
			return (-1);
		else
			endline = ft_strchr(str, '\n');
	}
	return (get_line(line, &endline, &str));
}