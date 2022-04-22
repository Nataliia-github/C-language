/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   get_next_line.c                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: ncheban <ncheban@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/04/21 15:34:01 by ncheban       #+#    #+#                 */
/*   Updated: 2022/04/22 17:31:09 by ncheban       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static char	*ft_get_line(char *save)
{
	int		i;
	char	*s;

	i = 0;
	if (save[i] == 0)
		return (NULL);
	while (save[i] != 0 && save[i] != '\n')
		i++;
	s = (char *)malloc((i + 2) * sizeof(char));
	if (s == 0)
		return (NULL);
	while (save[i] != 0 && save[i] != '\n')
	{
		s[i] = save[i];
		i++;
	}
	if (save[i] == '\n')
	{
		s[i] = save[i];
		++i;
	}
	s[i] = '\0';
	return (s);
}

static char	*ft_save(char *save)
{
	int		i;
	int		d;
	char	*s;

	i = 0;
	while (save[i] != 0 && save[i] != '\n')
		++i;
	if (save[i] == 0)
	{
		free(save);
		return (NULL);
	}
	s = (char *)malloc((ft_strlen(save) - i + 1) * sizeof(char));
	if (s == 0)
		return (NULL);
	++i;
	d = 0;
	while (save[i] != 0)
		s[d++] = save[i++];
	s[d] = '\0';
	free(save);
	return (s);
}

static char	*ft_read_and_save(int fd, char *save)
{
	char	*buff;
	int		read_bytes;

	buff = malloc((BUFFER_SIZE + 1) * sizeof(char));
	if (buff == 0)
		return (NULL);
	read_bytes = 1;
	while (ft_strchr(save, '\n') == 0 && read_bytes != 0)
	{
		read_bytes = read(fd, buff, BUFFER_SIZE);
		if (read_bytes == -1)
		{
			free(buff);
			return (NULL);
		}
		buff[read_bytes] = '\0';
		save = ft_strjoin(save, buff);
	}
	free(buff);
	return (save);
}

char	*get_next_line(int fd)
{
	char		*line;
	static char	*save;

	if (read(fd, NULL, 0) < 0)
		return (NULL);
	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	save = ft_read_and_save(fd, save);
	if (save == 0)
		return (NULL);
	line = ft_get_line(save);
	save = ft_save(save);
	return (line);
}
