/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strlcat.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: ncheban <ncheban@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/11/02 15:43:30 by ncheban       #+#    #+#                 */
/*   Updated: 2021/11/25 15:03:13 by ncheban       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

/* concatenate a string to a specific size.		*/

#include <stddef.h>
#include <stdio.h>
#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	first_len;
	size_t	last_len;
	size_t	i;
	size_t	j;

	first_len = ft_strlen(dst);
	last_len = ft_strlen(src);
	if (dstsize == 0)
		return (last_len);
	if (first_len > dstsize - 1)
		return (dstsize + last_len);
	i = first_len;
	j = 0;
	while (src[j] != '\0')
	{
		dst[i + j] = src[j];
		if ((i + j) == dstsize - 1)
			break ;
		++j;
	}
	dst[i + j] = '\0';
	return (first_len + last_len);
}
