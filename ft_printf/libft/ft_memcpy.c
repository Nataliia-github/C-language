/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memcpy.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: ncheban <ncheban@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/11/02 15:39:35 by ncheban       #+#    #+#                 */
/*   Updated: 2021/11/25 15:03:00 by ncheban       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

/* copy memory area. */

#include <stddef.h>

void	*ft_memcpy(void	*dst, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*temp_dst;
	unsigned char	*temp_src;

	if (dst == NULL && src == NULL)
		return (NULL);
	i = 0;
	temp_dst = (unsigned char *)dst;
	temp_src = (unsigned char *)src;
	while (i < n)
	{
		temp_dst[i] = temp_src[i];
		++i;
	}
	return (temp_dst);
}
