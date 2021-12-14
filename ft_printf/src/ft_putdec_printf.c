/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_putdec_printf.c                                 :+:    :+:            */
/*                                                     +:+                    */
/*   By: ncheban <ncheban@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/12/09 16:38:13 by ncheban       #+#    #+#                 */
/*   Updated: 2021/12/14 11:57:32 by ncheban       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/libft.h"
#include "ft_printf.h"

static int	ft_putdec(int num, int print_len, int fd)
{
	if (num >= 10)
	{
		ft_putdec(num / 10, ++print_len, fd);
		ft_putdec(num % 10, ++print_len, fd);
	}
	else
	{
		if (num < 10)
			print_len += ft_putchar_printf((num + '0'), fd);
		// else
		// 	print_len += ft_putchar_printf((num - 10 + '0'), fd);
	}
	return (print_len);
}

int	ft_putdec_printf(int num, int fd)
{
	int		print_len;

	print_len = 0;
	if (num == 0)
	{
		write (1, "0", fd);
		return (++print_len);
	}
	if (num < 0)
	{
		write (1, "-", fd);
		num = num *(-1);
		++print_len;
	}
	print_len += ft_putdec(num, print_len, fd);
	// printf("\nPutdec = %i\n", print_len);
	return (print_len);
}
