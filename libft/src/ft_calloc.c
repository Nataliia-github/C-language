/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_calloc.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: ncheban <ncheban@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/11/02 15:36:29 by ncheban       #+#    #+#                 */
/*   Updated: 2021/11/14 12:46:47 by ncheban       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

/* allocates memory and sets its bytes' values to 0. */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*str;

	str = malloc(count * size);
	if (str == NULL)
		return (NULL);
	ft_bzero (str, count * size);
	return (str);
}
