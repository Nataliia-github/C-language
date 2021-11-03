/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_bzero.c                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: nataliya <nataliya@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/11/03 19:34:54 by nataliya      #+#    #+#                 */
/*   Updated: 2021/11/03 19:43:39 by nataliya      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	ft_bzero(void	*s, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		((char *)s)[i] = 0;
		++i;
	}
}
