/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_putchar_fd.c                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: ncheban <ncheban@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/11/11 19:59:43 by ncheban       #+#    #+#                 */
/*   Updated: 2021/11/27 17:00:10 by ncheban       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

/*  output a char to a file descriptor. */

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write (fd, &c, 1);
}
