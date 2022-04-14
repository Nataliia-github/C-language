/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strlen.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: ncheban <ncheban@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/11/02 16:06:14 by ncheban       #+#    #+#                 */
/*   Updated: 2021/11/14 13:32:48 by ncheban       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

/* calculate the length of a string. */

#include <stddef.h>

size_t	ft_strlen(const char *s)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
		++i;
	return (i);
}
