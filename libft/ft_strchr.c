/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strchr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: ncheban <ncheban@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/11/02 15:41:16 by ncheban       #+#    #+#                 */
/*   Updated: 2021/11/27 17:00:28 by ncheban       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

/* locate character in a string. */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
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
