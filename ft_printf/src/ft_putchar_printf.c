/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_putchar_printf.c                                :+:    :+:            */
/*                                                     +:+                    */
/*   By: nataliya <nataliya@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/01/28 20:26:49 by nataliya      #+#    #+#                 */
/*   Updated: 2022/01/29 17:28:38 by nataliya      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */


#include "ft_printf.h"

static	int	ft_ignore_trash(const char *str, int i)
{
	char	*skip_symb;

	skip_symb = "-0 #+.";
	while (i < str[i] != '\0' && (ft_strchr(skip_symb, str[i]) != 0))
	{
		++i;
	}
	return (i);
}

static int	ft_alignt_right(char c, char w, int str_len, int print_space)
{
	int	print_len;
	
	print_len = 0;
	while(print_len < (print_space - str_len))
	{
		ft_putchar_fd(w, 1);
		++print_len;	
	}
	while (print_len < print_space)
	{
		ft_putchar_fd(c, 1);
		++print_len;
	}
	return (print_len);
}

static int	ft_alignt_left(char c, char w, int str_len, int print_space)
{
	int	print_len;
	
	print_len = 0;
	while (print_len < str_len)
	{
		ft_putchar_fd(c, 1);
		++print_len;
	}
	while (print_len < print_space)
	{
		ft_putchar_fd(w, 1);
		++print_len;
	}
	return(print_len);	
}

static int ft_alight_symb(char	c, t_print *metainfo, int ord)
{
	int	print_len;
	int	print_space;
	int	i;
	int	str_len;

	print_len = 0;
	i = 0;
	str_len = 1;
	print_space = metainfo[ord].space;
	if (metainfo[ord].minus == 0)
		print_len = ft_alignt_right(c, metainfo[ord].zero_white, str_len, print_space);
	else if (metainfo[ord].minus == 1)
		print_len = ft_alignt_left(c, metainfo[ord].zero_white, str_len, print_space);
	return(print_len);
}

static int	ft_apply_modifier(char c, t_print *metainfo, int ord)
{
	int	print_len;
	int	print_space;
	int	i;

	print_len = 0;
	print_space = 0;
	i = 0;
	// metainfo[ord].zero_white = ' ';
	i = ft_ignore_trash(metainfo[ord].modifier, i);
	print_space = metainfo[ord].space;
	if (print_space != 0 && metainfo[ord].zero_white == '0')
		return (-1);
	if (print_space < 0)
		return (-1);
	else
		print_len = ft_alight_symb(c, metainfo, ord);
	return (print_len);
}

int	ft_putchar_printf(char c, t_print *metainfo, int ord)
{
	int	print_len;

	print_len = 0;
	if (metainfo[ord].modifier == NULL)
		print_len +=write(1, &c, 1);
	else if((int)ft_strlen(metainfo[ord].modifier) == 1 && metainfo[ord].modifier[0] == '.')
		print_len += write(1, &c, 1);
	else
		print_len = ft_apply_modifier(c, metainfo, ord);
	return (print_len);
}