/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strlcat.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: ncheban <ncheban@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/11/02 15:43:30 by ncheban       #+#    #+#                 */
/*   Updated: 2021/11/13 16:58:19 by nataliya      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

/* take the full size								*/
/*    of the destination buffer and guarantee NUL-	*/
/*     termination if there is room.  Note that		*/
/*    room for the NUL should be included in		*/
/*     dstsize. 									*/

#include <stddef.h>
#include <stdio.h>
#include "libft.h"

size_t	ft_strlcat(char *restrict dst, const char *restrict src, size_t dstsize)
{
	size_t	d_len;
	size_t	s_len;
	size_t	i;

	d_len = ft_strlen(dst);
	s_len = ft_strlen(src);
	i = 0;
	if (d_len > dstsize)
		return (dstsize + s_len);
	if (dstsize == 0)
		return (s_len + 1);
	if (d_len + s_len >= dstsize && d_len < dstsize && d_len != 0)
		s_len = dstsize - d_len - 1;
	while (src[i] != '\0' && i < s_len)
	{
		dst[d_len + i] = src[i];
		++i;
	}
	dst[d_len + i] = '\0';
	return (d_len + i);
}
