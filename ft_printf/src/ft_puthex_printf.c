/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_puthex_printf.c                                 :+:    :+:            */
/*                                                     +:+                    */
/*   By: ncheban <ncheban@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/12/07 14:37:02 by ncheban       #+#    #+#                 */
/*   Updated: 2021/12/14 20:47:04 by ncheban       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/libft.h"
#include "ft_printf.h"

// static int	ft_puthex(unsigned long long hex, int print_len, int fd, char upper)
// {
// 	if (hex >= 16)
// 	{
// 		ft_puthex(hex / 16, ++print_len, fd, upper);
// 		ft_puthex(hex % 16, ++print_len, fd, upper);
// 	}
// 	else
// 	{
// 		if (hex < 10)
// 		{
// 			if (upper == 'X')
// 				print_len += ft_putchar_printf(ft_toupper(hex + '0'), fd);
// 			else
// 				print_len += ft_putchar_printf((hex + '0'), fd);
// 		}
// 		else
// 		{
// 			// if (upper == 'X')
// 			// 	print_len += ft_putchar_printf(ft_toupper(hex - 10 + 'a'), fd);
// 			// else
// 			print_len += ft_putchar_printf((hex - 10 + 'a'), fd);
// 			printf("%llu\n",(hex - 10 + '0'));
// 		}	
// 	}
// 	return (print_len);
// }

// int	ft_puthex_printf(unsigned long long hex, int fd, char upper)
// {
// 	int		print_len;

// 	print_len = 0;
// 	print_len += ft_puthex(hex, print_len, fd, upper);
// 	return (print_len);
// }

static int	ft_count_size(unsigned long long nbr)
{
	int	i;

	i = 0;
	if (nbr <= 0)
	{
		if (nbr < 0)
			nbr = nbr * (-1);
		++i;
	}
	while (nbr > 0)
	{
		nbr = nbr / 16;
		++i;
	}
	return (i);
}

int	ft_puthex_printf(unsigned long long hex, char upper)
{	
	int	print_len;

	print_len = 0;
	print_len += ft_count_size(hex);
	if (upper == 'X')
		ft_putnbr_printf(hex, "0123456789ABCDEF");
	else
		ft_putnbr_printf(hex, "0123456789abcdef");
	return (print_len);
}
