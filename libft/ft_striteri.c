/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_striteri.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: ncheban <ncheban@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/11/11 19:34:56 by ncheban       #+#    #+#                 */
/*   Updated: 2021/11/27 17:00:36 by ncheban       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

/* applies a function to each character of a string. */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	i;

	i = 0;
	if (s != NULL)
	{
		while (i < ft_strlen(s))
		{
			f(i, &s[i]);
			++i;
		}
	}
}
