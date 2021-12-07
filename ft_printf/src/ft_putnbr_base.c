/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_putnbr_base.c                                   :+:    :+:            */
/*                                                     +:+                    */
/*   By: ncheban <marvin@codam.nl>                    +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/08/26 14:41:04 by ncheban       #+#    #+#                 */
/*   Updated: 2021/12/07 15:00:25 by ncheban       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "../libft/libft.h"

int	ft_nbr_negative(int nbr)
{
	if (nbr < 0)
	{
		ft_putchar_fd('-', 1);
		nbr = nbr * (-1);
	}	
	return (nbr);
}

int	ft_check_base(char	*base)
{
	int	i;
	int	j;

	i = 0;
	if (!((base[i] >= '0' && base[i] <= '9')
			|| (base[i] >= 'a' && base[i] <= 'z')
			|| (base[i] >= 'A' && base[i] <= 'Z')))
		return (0);
	while (base[i] != '\0')
	{
		if (base[i] == '+' || base[i] == '-')
			return (0);
		j = 0;
		while (base[j] != '\0' && j != i)
		{
			if (base[i] == base[j])
				return (0);
			++j;
		}
		++i;
	}
	return (1);
}

int	ft_putnbr_base(int nbr, char *base)
{
	int		i;
	int		temp_nbr;
	int		size_base;
	char	rev_res[500];

	if (ft_check_base(base) != 0)
	{
		nbr = ft_nbr_negative(nbr);
		size_base = 0;
		while (base[size_base] != '\0')
			++size_base;
		if (size_base == 0 || size_base == 1)
			return (-1);
		temp_nbr = nbr;
		i = 0;
		while (temp_nbr > 0)
		{
			rev_res[i] = base[temp_nbr % size_base];
			temp_nbr = temp_nbr / size_base;
			++i;
		}	
		while (--i >= 0)
			ft_putchar_fd(rev_res[i], 1);
	}
	return (ft_strlen(rev_res));
}
