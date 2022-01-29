/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_putstr_printf.c                                 :+:    :+:            */
/*                                                     +:+                    */
/*   By: ncheban <ncheban@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/12/07 16:31:11 by ncheban       #+#    #+#                 */
/*   Updated: 2022/01/29 23:03:15 by nataliya      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

/*	1.Check modifier for trash.			*/
/*	2.Check sequence.					*/
/*	3.If '-'							*/
/*	4.If digit before '.'				*/
/*	5.Skip dot.							*/
/*	6.If digit after '.'				*/

#include "ft_printf.h"
// #include <stdlib.h>

static	int	ft_skip_trash(const char *mod, int i)
{
	char	*skip_symb;

	skip_symb = " #+";
	while (mod[i] != '\0')
	{
		if (ft_strchr(skip_symb, mod[i]) != 0)
			return (1);
		++i;
	}
	return (0);
}

static int	ft_print_space(char	*s, t_print *metainfo, int ord)
{
	int	print_space;

	if (metainfo[ord].space > (int)ft_strlen(s))
		print_space = metainfo[ord].space;
	else if (metainfo[ord].space == 0 && (metainfo[ord].cut_str <= (int)ft_strlen(s)) \
		&& metainfo[ord].cut_str != 0)
		print_space = metainfo[ord].cut_str;
	else if (((int)ft_strlen(s) - metainfo[ord].cut_str) < metainfo[ord].space)
		print_space = metainfo[ord].space;
	else
		print_space = (int)ft_strlen(s);
	return (print_space);
}

static int	ft_alignt_right(char *s, char c, int str_len, int print_space)
{
	int	print_len;
	int	i;
	
	print_len = 0;
	i = 0;
	while(print_len < (print_space - str_len))
	{
		ft_putchar_fd(c, 1);
		++print_len;	
	}
	while (i < str_len || print_len < print_space)
	{
		ft_putchar_fd(s[i], 1);
		++print_len;
		++i;
	}
	return (print_len);
}

static int	ft_alignt_left(char *s, char c, int str_len, int print_space)
{
	int	print_len;
	int	i;
	
	print_len = 0;
	i = 0;
	while (print_len < str_len)
	{
		ft_putchar_fd(s[i], 1);
		++print_len;
		++i;
	}
	while (print_len < print_space)
	{
		ft_putchar_fd(c, 1);
		++print_len;
	}
	return(print_len);	
}

static int ft_alight_symb(char	*s, t_print *metainfo, int ord)
{
	int	print_len;
	int	print_space;
	int	i;
	int	str_len;

	print_len = 0;
	i = 0;
	str_len = (int)ft_strlen(s);
	print_space = ft_print_space(s, metainfo, ord);
	// printf("strlen = %i, space = %i\n", str_len, print_space);
	if ((metainfo[ord].cut_str < (int)ft_strlen(s)) && (metainfo[ord].cut_str != 0))
		str_len = metainfo[ord].cut_str;
	if (metainfo[ord].dot == 1 && metainfo[ord].cut_str == 0)
		return (0);
	// printf("strlen = %i, space = %i\n", str_len, print_space);
	if (metainfo[ord].minus == 0)
		print_len = ft_alignt_right(s, metainfo[ord].zero_white, str_len, print_space);
	else if (metainfo[ord].minus == 1)
		print_len = ft_alignt_left(s, metainfo[ord].zero_white, str_len, print_space);
	return(print_len);
}

static int	ft_apply_modifier(char *s, t_print *metainfo, int ord)
{
	int	print_len;
	int	print_space;
	int	i;

	print_len = 0;
	i = 0;
	// metainfo[ord].zero_white = ' ';
	if (ft_skip_trash(metainfo[ord].modifier, i) != 0)
		return (-1);
	print_space = metainfo[ord].space;
	if (print_space != 0 && metainfo[ord].zero_white == '0')
		return (-1);
	if (print_space < 0)
		return (-1);
	// else if (print_space >= 0 && metainfo[ord].hidden == 0)
	// 	print_len = ft_alight_symb("+++", metainfo, ord);
	else
		print_len = ft_alight_symb(s, metainfo, ord);
	return (print_len);
}

int	ft_putstr_printf(char *s, t_print *metainfo, int ord)
{
	int	print_len;

	print_len = 0;
	if (s == NULL /*&& metainfo[ord].space == 0*/)
		s = "(null)";
	// else if (s == NULL && metainfo[ord].space != 0)
	// {
	// 	s = " ";
	// 	// printf("strlen = %i\n", (int)ft_strlen(s));
	// }
	// if (metainfo[ord].space != 0 && ft_strlen(s) == 0)
	// 	s = " ";
	// printf("#%i - metainfo[ord].space %i\n", ord, metainfo[ord].space);
	// printf("#%i - ft_strlen(s) %zu\n", ord, ft_strlen(s));
	ft_meta_hidden(s, metainfo, ord);
	if (metainfo[ord].modifier == NULL)
	{
		ft_putstr_fd(s, 1);
		print_len = ft_strlen(s);
	}
	else
		print_len = ft_apply_modifier(s, metainfo, ord);
	return (print_len);
}
