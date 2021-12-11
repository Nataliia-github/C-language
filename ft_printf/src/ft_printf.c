/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_printf.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: ncheban <ncheban@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/11/21 12:00:07 by ncheban       #+#    #+#                 */
/*   Updated: 2021/12/11 21:04:18 by ncheban       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/libft.h"
#include "ft_printf.h"

static int	ft_print_kind_str(t_print *result, const char *format, \
	int ord, va_list arg_ptr)
{
	int	i;
	int	print_len;

	i = 0;
	print_len = 0;
	if (format[result[ord].end] == 'c')
		print_len = ft_putchar_printf(va_arg(arg_ptr, int), 1);
	else if (format[result[ord].end] == 's')
		print_len = ft_putstr_printf(va_arg(arg_ptr, char *), 1);
	else if (format[result[ord].end] == 'p')
		print_len = ft_putptr_printf(va_arg(arg_ptr, unsigned long long), 1);
	else if (format[result[ord].end] == 'i' || format[result[ord].end] == 'd')
		print_len = ft_putdec_printf(va_arg(arg_ptr, int), 1);
	else if (format[result[ord].end] == 'u')
		print_len = ft_putstr_printf(ft_utoa(va_arg(arg_ptr, unsigned int)), 1);
	else if (format[result[ord].end] == 'x' || format[result[ord].end] == 'X')
		print_len = ft_puthex_printf(va_arg(arg_ptr, int), \
			1, format[result[ord].end]);
	else if (format[result[ord].end] == '%')
		print_len = ft_putchar_printf('%', 1);
	return (print_len);
}

// static void	ft_init_result(t_print *result, int ord)
// {
// 	result[ord].start = 0;
// 	result[ord].end = 0;
// 	result[ord].order = 0;
// 	result[ord].lenght = 0;
// }

static int	ft_output(const char *format, t_print *result, va_list arg_ptr)
{
	int	i;
	int	ord;
	int	print_len;

	i = 0;
	ord = 0;
	print_len = 0;
	while (format[i] != '\0')
	{
		if (i == result[ord].start)
		{
			print_len += ft_print_kind_str(result, format, ord, arg_ptr);
			i = result[ord].end + 1;
			++ord;
		}
		else
		{
			print_len += ft_putchar_printf(format[i], 1);
			++i;
		}
	}
	// ft_init_result(result, ord);
	return (print_len);
}

static int	ft_count_perc(const char *format)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (format[i] != '\0')
	{
		if (format[i] == '%' && format[i + 1] != '%')
			++j;
		++i;
	}
	return (j);
}

int	ft_printf(const char *format, ...)
{
	t_print	*result;
	int		ord;
	va_list	arg_ptr;
	int		print_len;

	if (format == NULL)
		return (0);
	result = (t_print *)malloc(ft_count_perc(format) * sizeof(t_print));
	if (result == NULL)
		return (0);
	ord = 0;
	// ft_init_result(result, ord);
	ord = ft_fill_result(format, result);
	if (ord == -1)
	{
		free (result);
		return (-1);
	}
	va_start(arg_ptr, format);
	print_len = 0;
	print_len = ft_output(format, result, arg_ptr);
	va_end(arg_ptr);
	free (result);
	return (print_len);
}
