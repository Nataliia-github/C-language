/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_printf.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: ncheban <ncheban@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/11/21 12:00:07 by ncheban       #+#    #+#                 */
/*   Updated: 2021/12/05 21:15:16 by nataliya      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>
#include "../libft/libft.h"
#include "ft_printf.h"

int	ft_flag_start(t_print *result, int i, int flag, int ord)
{
	result[ord].start = i;
	result[ord].order = ord;
	flag = 1;
	return (flag);
}

int	ft_flag_percent(t_print *result, int i, int flag, int ord)
{
	result[ord].end = i;
	result[ord].lenght = result[ord].end - result[ord].start + 1;
	// result[ord].arg_str = malloc((result[ord].lenght + 1) * sizeof(char *));
	flag = 0;
	return (flag);
}

int	ft_flag_end(t_print *result, int i, int flag, int ord,const char *format)
{
	char	*print_symb;

	print_symb = "cspdiuxX%";
	if (ft_strchr(print_symb, format[i]) != 0)
	{
		result[ord].end = i;
		result[ord].lenght = result[ord].end - result[ord].start + 1;
		// result[ord].arg_str = malloc((result[ord].lenght + 1) * sizeof(char *));
		flag = 0;
	}
	else /*if ((ft_strchr(print_form, format[i]) == 0))*/
	{
		flag = 0;
		return (-1);
	}
	return (flag);
}

static int	ft_fill_result(const char *restrict format, t_print *result)
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
			flag = ft_flag_end(result, i, flag, ord, format);
			ord++;
		}
		++i;
	}
	return (ord);
}

static void	ft_print_kind_str(t_print *result,const char *format,int ord,va_list arg_ptr)
{
	if (format[result[ord].end] == 'c')
		ft_putchar_fd(va_arg(arg_ptr, int), 1);
	else if (format[result[ord].end] == 's')
		ft_putstr_fd(va_arg(arg_ptr, char *), 1);
	else if (format[result[ord].end] == 'p')
		printf("#%i : void * Hexadecimal\n", ord);
	else if (format[result[ord].end] == 'i' || format[result[ord].end] == 'd')
		ft_putstr_fd(ft_itoa(va_arg(arg_ptr, int)), 1);
	else if (format[result[ord].end] == 'u')
		ft_putstr_fd(ft_itoa(va_arg(arg_ptr, int)), 1);
	else if (format[result[ord].end] == 'x')
		printf("#%i : Hexadecimal\n", ord);
	else if (format[result[ord].end] == 'X')
		printf("#%i : HEXADECIMAL\n", ord);
	else if (format[result[ord].end] == '%')
		ft_putchar_fd('%', 1);
}

static int ft_output(const char *format, t_print *result, va_list arg_ptr)
{
	int	i;
	int	ord;

	i = 0;
	ord = 0;
	while(format[i] != '\0')
	{
		if (i == result[ord].start)
		{
			ft_print_kind_str(result, format, ord, arg_ptr);
			i += result[ord].lenght;
			++ord;
		}
		ft_putchar_fd(format[i], 1);
		++i;
	}
	return (i);
}

int	ft_printf(const char *restrict format, ...)
{
	t_print	*result;
	int		i;
	int		ord;
	va_list	arg_ptr;
	int		print_lenght;

	print_lenght = 0;
	if (format == NULL)
		return (0);
	result = (t_print *)malloc(sizeof(t_print));
	if (result == NULL)
		return (-1);
	i = 0;
	ord = ft_fill_result(format, result);
	if (ord == -1)
	{
		write (1, "Incorrect type input\n", 21);
		return (0);
	}
	va_start(arg_ptr, format);
	i = ft_output(format, result, arg_ptr);
	va_end(arg_ptr);
	free (result);
	return (i);
}
