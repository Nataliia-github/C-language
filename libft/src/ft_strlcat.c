/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strlcat.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: ncheban <ncheban@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/11/02 15:43:30 by ncheban       #+#    #+#                 */
/*   Updated: 2021/11/16 21:12:10 by nataliya      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

/* concatenate a string to a specific size.		*/

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
	// if (d_len + s_len >= dstsize && d_len < dstsize && d_len != 0)
	// 	s_len = dstsize - d_len - 1;
	while (src[i] != '\0' && d_len + i < dstsize)
	{
		dst[d_len + i] = src[i];
		++i;
	}
	dst[d_len + i] = '\0';
	return (sizeof(dst) + dstsize - 1);
}


// size_t ft_strlcat(dst, src, siz)
// 	char *dst;
// 	const char *src;
// 	size_t siz;
// {
// 	register char *d = dst;
// 	register const char *s = src;
// 	register size_t n = siz;
// 	size_t dlen;

// 	/* Find the end of dst and adjust bytes left but don't go past end */
// 	while (n-- != 0 && *d != '\0')
// 		d++;
// 	dlen = d - dst;
// 	n = siz - dlen;

// 	if (n == 0)
// 		return(dlen + strlen(s));
// 	while (*s != '\0') {
// 		if (n != 1) {
// 			*d++ = *s;
// 			n--;
// 		}
// 		s++;
// 	}
// 	*d = '\0';

// 	return(dlen + (s - src));	/* count does not include NUL */
// }