/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memcmp.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: ncheban <ncheban@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/11/02 15:39:23 by ncheban       #+#    #+#                 */
/*   Updated: 2021/11/14 12:54:27 by ncheban       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

/* compare memory areas. */

#include <stddef.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*s1_1;
	const unsigned char	*s2_1;
	size_t				i;

	i = -1;
	s1_1 = (const unsigned char *)s1;
	s2_1 = (const unsigned char *)s2;
	while (++i < n)
	{
		if (s1_1[i] != s2_1[i])
			return (s1_1[i] - s2_1[i]);
	}
	return (0);
}
