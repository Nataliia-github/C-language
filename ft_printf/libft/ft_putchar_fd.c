/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_putchar_fd.c                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: ncheban <ncheban@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/11/11 19:59:43 by ncheban       #+#    #+#                 */
/*   Updated: 2021/12/09 18:37:50 by ncheban       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

/*  output a char to a file descriptor. */

#include "libft.h"
#include <unistd.h>

void	ft_putchar_fd(char c, int fd)
{
	write (fd, &c, 1);
}
