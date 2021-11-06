/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memmove.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: ncheban <ncheban@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/11/02 15:39:45 by ncheban       #+#    #+#                 */
/*   Updated: 2021/11/06 11:55:51 by ncheban       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*dst_1;
	unsigned char	*src_1;
	size_t			i;
//	unsigned char	*temp;
	//	unsigned char	temp_str[1000];
	if (dst == NULL && src == NULL)
		return (NULL);
	i = 0;
	dst_1 = (unsigned char *)dst;
	src_1 = (unsigned char *)src;
//	while (i < len)
//	{
//		temp[i] = src_1[i];
//		++i;
//	}
	if (src < dst)
	{
		while (i < len)
		{
			dst_1[i] = src_1[i];
			++i;
		}
	}
	else
	{
		ft_memcpy (dst, src, len);
	}
//	temp = &temp_str[0];
//	while (i < n)
//	{
//		temp[i] = src_1[i];
//		++i;
//	}
//	i = 0;
//	while (temp[i] != '\0')
//	{
//		dst_1[i] = temp[i];
//		++i;
//	}
//	dst_1[i] = '\0';
	return (dst);
}
