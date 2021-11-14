/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_putendl_fd.c                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: nataliya <nataliya@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/11/12 08:32:18 by nataliya      #+#    #+#                 */
/*   Updated: 2021/11/14 13:15:30 by ncheban       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

/* output a string to a file descriptor, followed by a new line. */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	ft_putstr_fd(s, fd);
	ft_putchar_fd('\n', fd);
}
