/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_putnbr_fd.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: nataliya <nataliya@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/11/12 08:45:31 by nataliya      #+#    #+#                 */
/*   Updated: 2021/11/16 16:01:15 by ncheban       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

/* output a number to a file descriptor. */

#include "libft.h"

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
	int	n_len_zero;

	if (n <= 0)
	{
		if (n == -2147483648)
			ft_putstr_fd("-2147483648", fd);
		else if (n < 0 && n > -2147483648)
		{
			ft_putchar_fd('-', fd);
			n = n * (-1);
		}
		else if (n == 0)
			ft_putchar_fd('0', fd);
	}
	if (n > 0)
	{
		n_len_zero = ft_count_len_zero(n);
		while (n_len_zero > 0)
		{
			ft_putchar_fd((n /n_len_zero + '0'), fd);
			n = n % n_len_zero;
			n_len_zero = n_len_zero / 10;
		}
	}
}
