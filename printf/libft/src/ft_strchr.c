/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strchr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: ncheban <ncheban@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/11/02 15:41:16 by ncheban       #+#    #+#                 */
/*   Updated: 2021/11/14 13:25:21 by ncheban       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

/* locate character in a string. */

#include <string.h>

char	*ft_strchr(const char *s, int c)
{
	char	*ptr;

	ptr = (char *)s;
	while (*ptr != c)
	{
		if (*ptr == '\0')
			return (NULL);
		++ptr;
	}
	return (ptr);
}
