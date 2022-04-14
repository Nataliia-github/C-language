/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_putptr_printf.c                                 :+:    :+:            */
/*                                                     +:+                    */
/*   By: ncheban <ncheban@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/12/07 14:37:02 by ncheban       #+#    #+#                 */
/*   Updated: 2022/01/30 18:56:08 by nataliya      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/libft.h"
#include "ft_printf.h"

static	int	ft_skip_trash(const char *str, int i)
{
	char	*skip_symb;

	skip_symb = " #+";
	while (i < str[i] != '\0')
	{
		if (ft_strchr(skip_symb, str[i]) != 0)
			return (1);
		++i;
	}
	return (0);
}


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
			ft_putchar_fd((ptr + '0'), 1);
		else
			ft_putchar_fd((ptr - 10 + 'a'), 1);
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

static int	ft_alignt_right(unsigned long long ptr, char w, int str_len, int print_space)
{
	int	print_len;
	
	print_len = 0;
	while(print_len < (print_space - str_len))
	{
		ft_putchar_fd(w, 1);
		++print_len;	
	}
	write(1, "0x", 2);
	ft_putptr(ptr);
	print_len += str_len;
	return (print_len);
}

static int	ft_alignt_left(unsigned long long ptr, char w, int str_len, int print_space)
{
	int	print_len;
	
	print_len = 0;
	write(1, "0x", 2);
	ft_putptr(ptr);
	print_len += str_len;
	while (print_len < print_space)
	{
		ft_putchar_fd(w, 1);
		++print_len;
	}
	return(print_len);	
}

static int ft_alight_symb(unsigned long long ptr, t_print *metainfo, int ord)
{
	int	print_len;
	int	print_space;
	int	i;
	int	str_len;

	print_len = 0;
	i = 0;
	str_len = (ft_count_len(ptr) + 2);
	print_space = metainfo[ord].space;
	if (metainfo[ord].minus == 0)
		print_len = ft_alignt_right(ptr, metainfo[ord].zero_white, str_len, print_space);
	else if (metainfo[ord].minus == 1)
		print_len = ft_alignt_left(ptr, metainfo[ord].zero_white, str_len, print_space);
	return(print_len);
}

static int	ft_apply_modifier(unsigned long long ptr, t_print *metainfo, int ord)
{
	int	print_len;
	int	print_space;
	int	i;

	print_len = 0;
	print_space = 0;
	i = 0;
	if (ft_skip_trash(metainfo[ord].modifier, i) == 1)
		return (-1);
	print_space = metainfo[ord].space;
	if (print_space != 0 && metainfo[ord].zero_white == '0')
		return (-1);
	if (print_space < 0)
		return (-1);
	else
		print_len = ft_alight_symb(ptr, metainfo, ord);
	return (print_len);
}

int	ft_putptr_printf(unsigned long long ptr, t_print *metainfo, int ord)
{
	int		print_len;

	print_len = 0;
	if (metainfo[ord].modifier == NULL)
	{
		if (ptr == 0)
			print_len = write(1, "0x0", 3);
		else if (ptr < 0)
			return (-1);
		else
		{
			print_len = write(1, "0x", 2);
			ft_putptr(ptr);
			print_len += ft_count_len(ptr);
		}
	}
	else
		print_len += ft_apply_modifier(ptr, metainfo, ord);
	return (print_len);
}
