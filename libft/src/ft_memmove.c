/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memmove.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: ncheban <ncheban@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/11/02 15:39:45 by ncheban       #+#    #+#                 */
/*   Updated: 2021/11/14 12:56:53 by ncheban       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

/*  copy memory area without overlap. */

#include "libft.h"
#include <stddef.h>

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	if (dst == NULL && src == NULL)
		return (NULL);
	if (src < dst)
		while (len--)
			((unsigned char *)dst)[len] = ((unsigned char *)src)[len];
	else
		ft_memcpy((unsigned char *)dst, (unsigned char *)src, len);
	return (dst);
}
