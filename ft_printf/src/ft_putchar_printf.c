/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_putchar_printf.c                                :+:    :+:            */
/*                                                     +:+                    */
/*   By: ncheban <ncheban@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/12/07 15:03:54 by ncheban       #+#    #+#                 */
/*   Updated: 2022/01/25 20:01:47 by nataliya      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static	int	ft_is_neg(const char *str, int i)
{
	int	neg;

	neg = 1;
	while (str[i] == '-')
	{
		if (str[i] == '-')
			neg = -1;
		++i;
	}
	return (neg);
}

static	int	ft_skip_m(const char *str, int i)
{
	int	j;

	j = 0;
	while (str[i] == '-')
	{
		++i;
		++j;
	}
	if (j == (int)ft_strlen(str))
		return (-1);
	return (i);
}

static int	ft_atoi_char(const char *str)
{
	int	i;
	int	j;
	int	neg;
	int	num;

	i = 0;
	num = 0;
	j = 0;
	neg = ft_is_neg(str, i);
	i = ft_skip_m(str, i);
	if (i < 0)
		return (1);
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

static int	ft_apply_modifier(char c, t_print *metainfo, int ord)
{
	int	print_len;
	int	print_space;
	int	i;

	print_len = 0;
	print_space = 0;
	i = 0;
	print_space = ft_atoi_char(metainfo[ord].modifier);
	if(print_space == 0)
		return (-1);
	else if (print_space > 0)
	{
		while(print_space > 1)
		{
			ft_putchar_fd(' ', 1);
			++print_len;
			--print_space;	
		}
		ft_putchar_fd(c, 1);
		++print_len;
	}
	else if (print_space < 0)
	{
		ft_putchar_fd(c, 1);
		++print_len;
		while (print_space < -1)
		{
			ft_putchar_fd(' ', 1);
			++print_len;
			++print_space;	
		}
	}
	return (print_len);
}

int	ft_putchar_printf(char c, t_print *metainfo, int ord)
{
	int	print_len;

	print_len = 0;
	if (metainfo[ord].modifier == NULL)
	{
		write (1, &c, 1);
		++print_len;
	}
	else if((int)ft_strlen(metainfo[ord].modifier) == 1 && metainfo[ord].modifier[0] == '.')
	{
		write (1, &c, 1);
		++print_len;
	}
	else
	{
		print_len = ft_apply_modifier(c, metainfo, ord);
	}
	return (print_len);
}
