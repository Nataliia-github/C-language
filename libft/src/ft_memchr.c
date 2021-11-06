/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memchr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: ncheban <ncheban@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/11/02 15:38:45 by ncheban       #+#    #+#                 */
/*   Updated: 2021/11/06 12:00:11 by ncheban       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	char	*s_1;
	char	c_1;
	size_t	i;

	c_1 = (char)c;
	s_1 = (char *)s;
	i = 0;
	while (i < n)
	{
		if (s_1[i] == c_1)
			return (&s_1[i]);
		++i;
	}
	return (0);
}
