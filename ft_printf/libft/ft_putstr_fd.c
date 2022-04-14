/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_putstr_fd.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: ncheban <ncheban@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/11/11 20:10:16 by ncheban       #+#    #+#                 */
/*   Updated: 2021/11/14 13:17:01 by ncheban       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

/* output a string to a file descriptor. */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	int	i;

	i = -1;
	if (s != 0)
	{
		while (s[++i] != '\0')
			ft_putchar_fd(s[i], fd);
	}
}
