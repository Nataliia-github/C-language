/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strrchr.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: ncheban <ncheban@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/11/02 16:06:41 by ncheban       #+#    #+#                 */
/*   Updated: 2021/11/27 17:01:35 by ncheban       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

/* locate character in a string. */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*ptr;

	ptr = (char *)s + ft_strlen(s);
	while (*ptr != (char)c)
	{
		if (ptr == (char *)s)
			return (NULL);
		ptr--;
	}
	return (ptr);
}
