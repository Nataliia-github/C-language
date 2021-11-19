/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strlcat.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: ncheban <ncheban@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/11/02 15:43:30 by ncheban       #+#    #+#                 */
/*   Updated: 2021/11/18 16:11:37 by nataliya      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

/* concatenate a string to a specific size.		*/

#include <stddef.h>
#include <stdio.h>
#include "libft.h"

size_t	ft_strlcat(char *restrict dst, const char *restrict src, size_t dstsize)
{
	// size_t	d_len;
	// size_t	s_len;
	char	*dst_temp;
	char	*src_temp;
	size_t	i;
	size_t	dstsize_temp;

	dst_temp = dst;
	src_temp = (char *)src;
	dstsize_temp = dstsize;
	i = 0;
	while (dst_temp[i] != '\0' && (dstsize_temp - 1) != 0)
	{
		++i;
		--dstsize_temp;
	}
	// d_len = ft_strlen(dst);
	// s_len = ft_strlen(src);
	// i = 0;

// 	if (d_len > dstsize)
// 		return (dstsize + s_len);
// 	if (dstsize == 0)
// 		return (s_len + 1);
// 	// if (d_len + s_len >= dstsize && d_len < dstsize && d_len != 0)
// 	// 	s_len = dstsize - d_len - 1;
// 	while (src[i] != '\0' && d_len + i < dstsize)
// 	{
// 		dst[d_len + i] = src[i];
// 		++i;
// 	}
// 	dst[d_len + i] = '\0';
// 	return (sizeof(dst) + dstsize - 1);
// }


size_t ft_strlcat(dst, src, siz)
	char *dst;
	const char *src;
	size_t siz;
{
	/* making d = dst*/
	register char *d = dst;
	/*making s = src*/
	register const char *s = src;
	/* n(dstsizse) = size*/ 
	register size_t n = siz;
	size_t dlen;

	/* Find the end of dst and adjust bytes left but don't go past end */
	/* (n (dstsize) - 1) != '\0' && d[i] (dst) != '\0' */
	while (n-- != 0 && *d != '\0')
	/* ++i; --n(dstsize)*/
		d++;
	dlen = d - dst;
	n = siz - dlen;

	if (n == 0)
		return(dlen + strlen(s));
	while (*s != '\0') {
		if (n != 1) {
			*d++ = *s;
			n--;
		}
		s++;
	}
	*d = '\0';

	return(dlen + (s - src));	/* count does not include NUL */
}