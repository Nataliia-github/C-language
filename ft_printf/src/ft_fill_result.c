/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_fill_result.c                                   :+:    :+:            */
/*                                                     +:+                    */
/*   By: ncheban <ncheban@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/12/07 14:08:17 by ncheban       #+#    #+#                 */
/*   Updated: 2022/01/25 08:46:30 by nataliya      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "../libft/libft.h"
#include <stdlib.h>

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
	// printf("\n%i Res_percent = %i\n", i, result[ord].end);
	// result[ord].lenght = result[ord].end - result[ord].start + 1;
	flag = 0;
	return (flag);
}

static int	ft_flag_end(t_print *result, int i, int ord, const char	*format)
{
	char	*print_symb;
	char	*modif_symb;
	int		flag;
	int		j;

	j = 0;
	flag = 1;
	print_symb = "cspdiuxX%";
	modif_symb = "-0.# +";
	result[ord].flag_mod = 0;
	if (ft_strchr(print_symb, format[i]) != 0)
	{
		result[ord].end = i;
		// printf("\n%i Res_end = %i\n", i, result[ord].end);
		// result[ord].lenght = result[ord].end - result[ord].start + 1;
		return (0);
	}
	else if (ft_strchr(modif_symb, format[i]) != 0)
		result[ord].flag_mod = 1;

	else
		flag = -1;
	// printf("lenght = %i\n", result[ord].lenght);
	return (flag);
}

static int	ft_analyse_format(const char *format, t_print *result)
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
			flag = ft_flag_start(result, i, flag, ord);
		else if (format[i] == '%' && flag == 1)
		{
			flag = ft_flag_percent(result, i, flag, ord);
			ord++;
		}
		else if (format[i] != '%' && flag == 1)
		{
			flag = ft_flag_end(result, i, ord, format);
			if (flag == 0)
				ord++;
		}
		++i;
	}
	if (flag == -1)
		return (-1);
	return (ord);	
}

int	ft_fill_result(const char *format, t_print *result)
{
	// int		ord;
	int		i;
	// int		flag;
	int	ord;

	ord = 0;
	ord = ft_analyse_format(format, result);
	// ft_save_modifyer(format, result, ord);
	// ord = 0;
	i = 0;
	// flag = 0;
	// while (format[i] != '\0')
	// {		
	// 	if (format[i] == '%' && flag == 0)
	// 		flag = ft_flag_start(result, i, flag, ord);
	// 	else if (format[i] == '%' && flag == 1)
	// 	{
	// 		flag = ft_flag_percent(result, i, flag, ord);
	// 		ord++;
	// 	}
	// 	else if (format[i] != '%' && flag == 1)
	// 	{
	// 		flag = ft_flag_end(result, i, ord, format);
	// 		ord++;
	// 	}
	// 	++i;
	// }
	while (i < ord)
	{
		result[i].lenght = result[i].end - result[i].start + 1;
		printf("#%i end %i - start %i = lenght %i\n", i, result[i].end, result[i].start, result[i].lenght);
		// printf("\n %i lenght = %i\n", i, result[i].lenght);
		++i;
	}
	return (ord);
}
