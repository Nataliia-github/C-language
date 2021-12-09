/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_putchar_printf.c                                :+:    :+:            */
/*                                                     +:+                    */
/*   By: ncheban <ncheban@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/12/07 15:03:54 by ncheban       #+#    #+#                 */
/*   Updated: 2021/12/09 20:26:15 by ncheban       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putchar_printf(char c, int fd)
{
	write (fd, &c, 1);
	return (1);
}
