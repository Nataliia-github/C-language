/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_atoi.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: ncheban <marvin@codam.nl>                    +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/11/02 15:28:14 by ncheban       #+#    #+#                 */
/*   Updated: 2021/11/02 15:28:14 by ncheban       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

/* convert a string to an integer. */

#include "libft.h"

int	ft_skip_white(const char *str, int i)
{
	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\r'
		|| str[i] == '\n' || str[i] == '\f' || str[i] == '\v')
		++i;
	return (i);
}

int	ft_is_neg(const char *str, int i)
{
	int	neg;

	neg = 1;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			neg *= -1;
		++i;
	}
	return (neg);
}

int	ft_skip_pm(const char *str, int i)
{
	int	j;

	j = 0;
	while (str[i] == '+' || str[i] == '-')
	{
		++i;
		++j;
	}
	if (j > 1)
		return (-1);
	return (i);
}

int	ft_atoi(const char *str)
{
	int	i;
	int	j;
	int	neg;
	int	num;

	i = 0;
	num = 0;
	j = 0;
	i = ft_skip_white(str, i);
	neg = ft_is_neg(str, i);
	i = ft_skip_pm(str, i);
	if (i == -1)
		return (0);
	while (ft_isdigit(str[i]))
	{
		num = num * 10 + (str[i] - '0');
		if (j > 10 && neg == 1)
			return (-1);
		else if (j > 10 && neg == -1)
			return (0);
		++i;
		++j;
	}
	return (num * neg);
}
