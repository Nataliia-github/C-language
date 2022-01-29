/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_fill_metainfo.c                                   :+:    :+:            */
/*                                                     +:+                    */
/*   By: ncheban <ncheban@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/12/07 14:08:17 by ncheban       #+#    #+#                 */
/*   Updated: 2022/01/25 10:03:12 by nataliya      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdlib.h>

static int	ft_flag_start(t_print *metainfo, int i, int ord)
{
	metainfo[ord].start = i;
	metainfo[ord].index = ord;
	return (1);
}

static int	ft_flag_percent(t_print *metainfo, int i, int ord/*, const char	*format*/)
{
	metainfo[ord].end = i;
	metainfo[ord].lenght = metainfo[ord].end - metainfo[ord].start + 1;
	return (0);
}

static int	ft_flag_end(t_print *metainfo, int i, int ord, const char	*format)
{
	char	*print_symb;
	char	*modif_symb;
	int		flag;

	flag = 1;
	print_symb = "cspdiuxX";
	modif_symb = "-0123456789.# +";
	if (ft_strchr(print_symb, format[i]) != 0)
	{
		metainfo[ord].end = i;
		metainfo[ord].lenght = metainfo[ord].end - metainfo[ord].start + 1;
		flag = 0;
	}
	else if (ft_strchr(modif_symb, format[i]) == 0)
		flag = -1;
	return (flag);
}

static int	ft_analyse_format(const char *format, t_print *metainfo)
{
	int ord;
	int	i;
	int	flag;

	ord = 0;
	i = 0;
	flag = 0;
	while (format[i] != '\0')
	{		
		if (format[i] == '%' && flag == 0)
			flag = ft_flag_start(metainfo, i, ord);
		else if (format[i] == '%' && flag == 1)
		{
			flag = ft_flag_percent(metainfo, i, ord/*, format*/);
			ord++;
		}
		else if (format[i] != '%' && flag == 1)
		{
			flag = ft_flag_end(metainfo, i, ord, format);
			if (flag == 0)
				ord++;
		}
		++i;
	}
	if (flag == -1)
		return (-1);
	return (ord);	
}

static void	ft_save_modifier(const char *format, t_print *metainfo, int i)
{
	int	j;

	j = 0;
	metainfo[i].modifier = (char *)malloc(((metainfo[i].lenght - 2) + 1) * sizeof(char));
	if (metainfo[i].modifier == NULL)
		return ;
	while(j < metainfo[i].lenght - 2)
	{
		metainfo[i].modifier[j] = format[(metainfo[i].start + 1) + j];
		++j;	
	}
	metainfo[i].modifier[j] = '\0';
}

static int ft_meta_minus(const char *mod, t_print *metainfo, int ord, int i)
{
	while (mod[i] == '-' && mod[i] != '\0')
	{
		metainfo[ord].minus = 1;
		++i;
	}
	return (i);
}

static int ft_meta_space(const char *mod, t_print *metainfo, int ord, int i)
{
	if (mod[i] == '0')
		metainfo[ord].zero_white = '0';
	else 
		metainfo[ord].zero_white = ' ';
	while (ft_isdigit(mod[i])!= 0 && mod[i] != '\0')
	{
		metainfo[ord].space = metainfo[ord].space * 10 + (mod[i] - '0');
		++i;
	}
	return (i);
}

static int ft_meta_dot(t_print *metainfo, int ord, int i)
{
	metainfo[ord].dot = 1;
	++i;
	return (i);
}

static int ft_meta_cut(const char *mod, t_print *metainfo, int ord, int i)
{
	while (ft_isdigit(mod[i])!= 0 && mod[i] != '\0')
	{
		metainfo[ord].cut_str = metainfo[ord].cut_str * 10 + (mod[i] - '0');
		++i;
	}
	return (i);
}

static void	ft_check_sequence(const char *mod, t_print *metainfo, int ord)
{
	int	i;

	i = 0;
	metainfo[ord].minus = 0;
	metainfo[ord].space = 0;
	metainfo[ord].cut_str = 0;
	// ft_meta_hidden(mod, metainfo, ord, i);
	if (mod[i] == '-')
		i = ft_meta_minus(mod, metainfo, ord, i);
	if (ft_isdigit(mod[i]) != 0)
		i = ft_meta_space(mod, metainfo, ord, i);
	if (mod[i] == '.')
		i = ft_meta_dot(metainfo, ord, i);	
	if (ft_isdigit(mod[i]) != 0)
		i = ft_meta_cut(mod, metainfo, ord, i);
	if (i != (int)ft_strlen(mod))
		metainfo[ord].space = -1;
}

void ft_meta_hidden(const char *s, t_print *metainfo, int ord)
{
	int	i;

	i = 0;
	metainfo[ord].hidden = 0;
	while (s[i] == '\0' || s[i] == '\t' || s[i] == '\r'
		|| s[i] == '\n' || s[i] == '\f' || s[i] == '\v')
	{
		metainfo[ord].hidden = 1;
		// printf("metainfo[ord].hidden = %i\n", metainfo[ord].hidden);
		// printf("metainfo[ord].hidden = %i\n", metainfo[ord].hidden);
		++i;
	}

	// printf("strlen = %i && i = %i\n", (int)ft_strlen(s), i);
	// if (i == (int)ft_strlen(s))
	// {
	// 	metainfo[ord].hidden = 1;
	// 	printf("metainfo[ord].hidden = %i\n", metainfo[ord].hidden);
	// }
	// printf("metainfo[ord].hidden = %i\n", metainfo[ord].hidden);
	// return (i);
}

int	ft_fill_metainfo(const char *format, t_print *metainfo)
{
	int		i;
	int		ord;

	ord = 0;
	ord = ft_analyse_format(format, metainfo);
	i = 0;
	while (i < ord)
	{
		if (metainfo[i].lenght > 2)
		{
			// metainfo[i].modifier = ft_substr(format, metainfo[i].start, metainfo[i].lenght);
			// if (metainfo[i].modifier == NULL)
			// 	return (-1);
			ft_save_modifier(format, metainfo, i);
			// metainfo[ord].zero_white = ' ';
			// metainfo[ord].space = 1;
			ft_check_sequence(metainfo[i].modifier, metainfo, i);
		}
		++i;
	}
	return (ord);
}
