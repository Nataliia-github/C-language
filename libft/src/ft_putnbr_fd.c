/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_putnbr_fd.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: nataliya <nataliya@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/11/12 08:45:31 by nataliya      #+#    #+#                 */
/*   Updated: 2021/11/12 10:04:41 by nataliya      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

/* Outputs the integer ’n’ to the given file */
/* descriptor. */

#include "libft.h"
#include <stdio.h>

int	ft_count_len_zero(int n)
{
	int	i;

	i = 1;
	while (n / 10 > 0)
	{
		n /= 10;
		i *= 10;
	}
	return (i);
}

void	ft_putnbr_fd(int n, int fd)
{
	int n_len_zero;

	if (n == -2147483648)
	{
		ft_putchar_fd('-', fd);
		ft_putchar_fd('2', fd);
		n = 147483648;
	}
	if (n < 0 && n != -2147483648)
	{
		ft_putchar_fd('-', fd);
		n *= -1;
	}
	if (n == 0)
		ft_putchar_fd('0', fd);
	n_len_zero = ft_count_len_zero(n);
	while (n_len_zero > 0)
	{
		ft_putchar_fd((n / (n_len_zero / 10)), fd);
		n = n % (n_len_zero / 10); 
		n_len_zero /= 10;
	}	
}
