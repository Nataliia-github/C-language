/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strlcpy.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: ncheban <ncheban@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/11/02 16:03:22 by ncheban       #+#    #+#                 */
/*   Updated: 2021/11/02 16:03:24 by ncheban       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdio.h>

size_t	ft_strlcpy(char *restrict dst, const char *restrict src, size_t dstsize)
{
	const char	*temp_src;
	size_t		temp_size;

	temp_src = src;
	temp_size = dstsize;
	if (dstsize != 0)
	{
		while (--temp_size != 0)
		{
			if (dst[i] == 0 && str[i] == 0)
				break ;
			++i;
		}
	}
	if (temp_size == 0)
	{
		if (dstsize != 0)
			*dst = '\0';
		while (*src != 0)
			++src;
	}
	return (src - temp_src);
}
