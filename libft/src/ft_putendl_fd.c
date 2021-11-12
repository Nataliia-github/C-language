/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_putendl_fd.c                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: nataliya <nataliya@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/11/12 08:32:18 by nataliya      #+#    #+#                 */
/*   Updated: 2021/11/12 08:41:30 by nataliya      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

/* Outputs the string ’s’ to the given file */
/* descriptor, followed by a newline. */

#include "libft.h"
#include <unistd.h>

void	ft_putendl_fd(char *s, int fd)
{
	ft_putstr_fd(s, fd);
	ft_putchar_fd('\n', fd);
}