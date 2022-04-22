/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   get_next_line_utils.c                              :+:    :+:            */
/*                                                     +:+                    */
/*   By: ncheban <ncheban@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/04/21 17:41:03 by ncheban       #+#    #+#                 */
/*   Updated: 2022/04/22 17:09:51 by ncheban       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*ft_strchr(char *s, int c)
{
	char	*ptr;

	ptr = (char *)s;
	while (*ptr != (char)c)
	{
		if (*ptr == '\0')
			return (NULL);
		++ptr;
	}
	return (ptr);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char			*strj;
	unsigned int	s1_len;
	unsigned int	s2_len;
	unsigned int	i;

	if (!s1 || !s2)
		return (NULL);
	s1_len = ft_strlen(s1);
	s2_len = ft_strlen(s2);
	strj = (char *)malloc((s1_len + s2_len + 1) * sizeof(char));
	if (!strj)
		return (NULL);
	i = 0;
	while (s1[i] != '\0')
	{
		strj[i] = s1[i];
		++i;
	}
	while (s2[i - s1_len] != '\0')
	{
		strj[i] = s2[i - s1_len];
		++i;
	}
	strj[i] = '\0';
	return (strj);
}

size_t	ft_strlen(const char *s)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
		++i;
	return (i);
}
