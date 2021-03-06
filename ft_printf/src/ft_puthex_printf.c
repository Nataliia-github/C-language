/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_puthex_printf.c                                 :+:    :+:            */
/*                                                     +:+                    */
/*   By: ncheban <ncheban@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/12/07 14:37:02 by ncheban       #+#    #+#                 */
/*   Updated: 2022/04/14 13:23:23 by ncheban       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/libft.h"
#include "ft_printf.h"

static int	ft_count_size(unsigned long long hex)
{
	int	i;

	i = 0;
	while (hex != 0)
	{
		hex = hex / 16;
		++i;
	}
	return (i);
}

static void	ft_puthex(unsigned long long hex, char upper)
{
	if (hex >= 16)
	{
		ft_puthex(hex / 16, upper);
		ft_puthex(hex % 16, upper);
	}
	else
	{
		if (hex < 10)
			ft_putchar_fd((hex + '0'), 1);
		else
		{
			if (upper == 'X')
				ft_putchar_fd((hex - 10 + 'A'), 1);
			if (upper == 'x')
				ft_putchar_fd((hex - 10 + 'a'), 1);
		}
	}
}

int	ft_puthex_printf(unsigned int hex, char upper)
{	
	int	print_len;

	print_len = 0;
	if (hex == 0)
	{
		write(1, "0", 1);
		return (1);
	}
	else
	{
		print_len = ft_count_size(hex);
		ft_puthex(hex, upper);
	}
	return (print_len);
}
