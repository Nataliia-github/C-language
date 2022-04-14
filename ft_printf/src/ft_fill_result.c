/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_fill_result.c                                   :+:    :+:            */
/*                                                     +:+                    */
/*   By: ncheban <ncheban@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/12/07 14:08:17 by ncheban       #+#    #+#                 */
/*   Updated: 2021/12/14 18:31:23 by ncheban       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "../libft/libft.h"

static int	ft_flag_start(t_print *result, int i, int flag, int ord)
{
	result[ord].start = i;
	result[ord].order = ord;
	flag = 1;
	return (flag);
}

static int	ft_flag_percent(t_print *result, int i, int flag, int ord)
{
	result[ord].end = i;
	result[ord].lenght = result[ord].end - result[ord].start + 1;
	flag = 0;
	return (flag);
}

static int	ft_flag_end(t_print *result, int i, int ord, const char	*format)
{
	char	*print_symb;
	int		flag;

	flag = 1;
	print_symb = "cspdiuxX%";
	if (ft_strchr(print_symb, format[i]) != 0)
	{
		result[ord].end = i;
		result[ord].lenght = result[ord].end - result[ord].start + 1;
		flag = 0;
	}
	else
	{
		flag = 0;
		return (-1);
	}
	return (flag);
}

int	ft_fill_result(const char *format, t_print *result)
{
	int		ord;
	int		i;
	int		flag;

	ord = 0;
	i = 0;
	flag = 0;
	while (format[i] != '\0')
	{		
		if (format[i] == '%' && flag == 0)
			flag = ft_flag_start(result, i, flag, ord);
		else if (format[i] == '%' && flag == 1)
		{
			flag = ft_flag_percent(result, i, flag, ord);
			ord++;
		}
		else if (format[i] != '%' && flag == 1)
		{
			flag = ft_flag_end(result, i, ord, format);
			ord++;
		}
		++i;
	}
	return (ord);
}
