/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memcpy.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: ncheban <ncheban@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/11/02 15:39:35 by ncheban       #+#    #+#                 */
/*   Updated: 2021/11/02 15:39:37 by ncheban       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memcpy(void	*restrict	dst, const void	*restrict src, size_t n)
{
	size_t		i;
	char		*temp_dst;
	const char	*temp_src;

	i = 0;
	temp_dst = (char *)dst;
	temp_src = (const char *)src;
	while (temp_src[i] != '\0' && i < n)
	{
		temp_dst[i] = temp_src[i];
		++i;
	}
	temp_dst[i] = '\0';
	return (0);
}
