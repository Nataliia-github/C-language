/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_putptr_printf.c                                 :+:    :+:            */
/*                                                     +:+                    */
/*   By: ncheban <ncheban@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/12/07 14:37:02 by ncheban       #+#    #+#                 */
/*   Updated: 2021/12/14 18:23:59 by ncheban       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/libft.h"
#include "ft_printf.h"

static int	ft_putptr(unsigned long long ptr, int print_len, int fd)
{
	if (ptr >= 16)
	{
		ft_putptr(ptr / 16, ++print_len, fd);
		ft_putptr(ptr % 16, ++print_len, fd);
	}
	else
	{
		if (ptr < 10)
			print_len = ft_putchar_printf((ptr + '0'), fd);
		else
			print_len = ft_putchar_printf((ptr - 10 + 'a'), fd);
	}
	return (print_len);
}

int	ft_putptr_printf(uintptr_t ptr, int fd)
{
	int		print_len;

	write(fd, "0x", 2);
	print_len = 2;
	if (ptr == 0)
	{
		write (1, "0", 1);
		++print_len;
	}
	else
		print_len += ft_putptr(ptr, print_len, fd);
	// printf("\nPutptr = %i\n", print_len);
	return (print_len);
}
