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
#include "../libft/libft.h"
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
			ft_save_modifier(format, metainfo, i);
		// printf("#%i end %i - start %i = lenght %i\n", i, metainfo[i].end, metainfo[i].start, metainfo[i].lenght);
		// printf("%s\n", metainfo[i].modifier);
		++i;
	}
	return (ord);
}
