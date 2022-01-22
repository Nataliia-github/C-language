/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_putptr_printf.c                                 :+:    :+:            */
/*                                                     +:+                    */
/*   By: ncheban <ncheban@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/12/07 14:37:02 by ncheban       #+#    #+#                 */
/*   Updated: 2022/01/22 22:37:12 by nataliya      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/libft.h"
#include "ft_printf.h"

static void	ft_putptr(unsigned long long ptr)
{
	if (ptr >= 16)
	{
		ft_putptr(ptr / 16);
		ft_putptr(ptr % 16);
	}
	else
	{
		if (ptr < 10)
			ft_putchar_printf(ptr + '0');
		else
			ft_putchar_printf(ptr - 10 + 'a');
	}
}

static int	ft_count_len(unsigned long long ptr)
{
	int	i;

	i = 0;
	while (ptr != 0)
	{
		ptr = ptr / 16;
		++i;
	}
	return (i);
}

int	ft_putptr_printf(unsigned long long ptr)
{
	int		print_len;

	write(1, "0x", 2);
	print_len = 2;
	if (ptr == 0)
		print_len += ft_putchar_printf('0');
	else
		ft_putptr(ptr);
	print_len += ft_count_len (ptr);
	return (print_len);
}
