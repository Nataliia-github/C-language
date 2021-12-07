/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_printf.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: ncheban <ncheban@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/11/21 12:00:07 by ncheban       #+#    #+#                 */
/*   Updated: 2021/12/07 18:11:13 by ncheban       ########   odam.nl         */
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
		printf("#%i : void * Hexadecimal\n", ord);
	else if (format[result[ord].end] == 'i' || format[result[ord].end] == 'd')
		print_len = ft_putnbr_base(va_arg(arg_ptr, int), "0123456789");
	else if (format[result[ord].end] == 'u')
		print_len = ft_putstr_printf(ft_utoa(va_arg(arg_ptr, unsigned int)), 1);
	else if (format[result[ord].end] == 'x')
		print_len = ft_putnbr_base(va_arg(arg_ptr, int), "0123456789abcdef");
	else if (format[result[ord].end] == 'X')
		print_len = ft_putnbr_base(va_arg(arg_ptr, int), "0123456789ABCDEF");
	else if (format[result[ord].end] == '%')
		print_len = ft_putchar_printf('%', 1);
	return (print_len - result[ord].lenght);
}

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
	return (print_len);
}

int	ft_printf(const char *format, ...)
{
	t_print	*result;
	int		ord;
	va_list	arg_ptr;
	int		print_len;

	print_len = 0;
	if (format == NULL)
		return (0);
	result = (t_print *)malloc(sizeof(t_print));
	if (result == NULL)
		return (-1);
	ord = ft_fill_result(format, result);
	if (ord == -1)
	{
		write (1, "Incorrect type input\n", 21);
		return (-1);
	}
	va_start(arg_ptr, format);
	print_len = ft_output(format, result, arg_ptr);
	va_end(arg_ptr);
	free (result);
	printf("Output lenght = %i\n", print_len);
	return (print_len);
}
