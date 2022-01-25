/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_putperc_printf.c                                :+:    :+:            */
/*                                                     +:+                    */
/*   By: nataliya <nataliya@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/01/25 20:36:02 by nataliya      #+#    #+#                 */
/*   Updated: 2022/01/25 22:57:28 by nataliya      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static	int	ft_skip_trash(const char *str, int i)
{
	char	*skip_symb;

	skip_symb = "-0 #+.";
	// skip_symb = "0";
	// printf("modifier '%s'", str);
	// while ((ft_strchr(skip_symb, str[i]) != 0) || i < (int)ft_strlen(str))
	// {
	// 	++i;
	// }
	while (i < str[i] != '\0' && (ft_strchr(skip_symb, str[i]) != 0))
	{
		// printf("c = %c", str[i]);
		++i;
	}
	return (i);
}

static	int	ft_is_neg(const char *str, int i)
{
	int		neg;
	char	*skip_symb;

	skip_symb = "-0# +.";
	neg = 1;
	while (ft_strchr(skip_symb, str[i]) != 0)
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

static int	ft_atoi_perc(const char *str, t_print *metainfo, int ord)
{
	int	i;
	int	j;
	int	neg;
	int	num;

	i = 0;
	num = 0;
	j = 0;
	neg = ft_is_neg(str, i);
	// printf("\nneg=%i\n", neg);
	i = ft_skip_trash(str, i);
	// printf("i=%i\n", i);
	i = ft_skip_m(str, i);
	if (i < 0)
		return (1);
	metainfo[ord].zero_white = 0;
	while (ft_isdigit(str[i]))
	{
		if (str[i] == '0' && str[i + 1] != '0')
			metainfo[ord].zero_white = 1;
		num = num * 10 + (str[i] - '0');
		if (j > 10 && neg == 1)
			return (-1);
		else if (j > 10 && neg == -1)
			return (0);
		++i;
		++j;
	}
	// printf("\nnum=%i\n", num);
	if (num == 0)
		return (neg);
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
	print_space = ft_atoi_perc(metainfo[ord].modifier, metainfo, ord);
	if(print_space == 0)
		return (-1);
	else if (print_space > 0)
	{
		while(print_space > 1)
		{
			if (metainfo[ord].zero_white == 0)
				ft_putchar_fd(' ', 1);
			else
			{
				ft_putchar_fd('0', 1);
				printf("\n0");
			}
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

int	ft_putperc_printf(char c, t_print *metainfo, int ord)
{
	int	print_len;

	print_len = 0;
	if (metainfo[ord].modifier == NULL)
	{
		ft_putchar_fd(c, 1);
		++print_len;
	}
	else if((int)ft_strlen(metainfo[ord].modifier) == 1 && metainfo[ord].modifier[0] == '.')
	{
		ft_putchar_fd(c, 1);;
		++print_len;
	}
	else
	{
		print_len = ft_apply_modifier(c, metainfo, ord);
	}
	return (print_len);
}
