/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memchr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: ncheban <ncheban@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/11/02 15:38:45 by ncheban       #+#    #+#                 */
/*   Updated: 2021/11/14 12:53:59 by ncheban       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

/* scan memory for a character. */

#include <stddef.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	char	*s_1;
	size_t	i;

	s_1 = (char *)s;
	i = -1;
	while (++i < n)
	{
		if (s_1[i] == c)
			return (&s_1[i]);
	}
	return (0);
}
