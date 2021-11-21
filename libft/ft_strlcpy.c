/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strlcpy.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: ncheban <ncheban@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/11/02 16:03:22 by ncheban       #+#    #+#                 */
/*   Updated: 2021/11/14 13:32:13 by ncheban       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

/* copy string to a specific size. */

#include <stddef.h>
#include <stdio.h>
#include "libft.h"

size_t	ft_strlcpy(char *restrict dst, const char *restrict src, size_t dstsize)
{
	size_t		i;

	i = 0;
	if (dstsize == 0)
		return (ft_strlen(src));
	while (i < (dstsize - 1) && src[i] != '\0')
	{
		dst[i] = src[i];
		++i;
	}
	dst[i] = '\0';
	return (ft_strlen(src));
}
