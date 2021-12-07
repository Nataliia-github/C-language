/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_printf.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: ncheban <ncheban@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/11/21 12:00:07 by ncheban       #+#    #+#                 */
/*   Updated: 2021/12/07 14:59:53 by ncheban       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/libft.h"
#include "ft_printf.h"

static int	ft_print_kind_str(t_print *result, const char *format, \
	int ord, va_list arg_ptr)
{
	int	i;

	i = 0;
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
		i = ft_putnbr_base(va_arg(arg_ptr, int), "0123456789abcdef");
	else if (format[result[ord].end] == 'X')
		i = ft_putnbr_base(va_arg(arg_ptr, int), "0123456789ABCDEF");
	else if (format[result[ord].end] == '%')
		ft_putchar_fd('%', 1);
	return (i);
}

static int	ft_output(const char *format, t_print *result, va_list arg_ptr)
{
	int	i;
	int	ord;

	i = 0;
	ord = 0;
	while (format[i] != '\0')
	{
		if (i == result[ord].start)
		{
			i += ft_print_kind_str(result, format, ord, arg_ptr);
			++ord;
		}
		ft_putchar_fd(format[i], 1);
		++i;
	}
	return (i);
}

int	ft_printf(const char *format, ...)
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
		return (-1);
	}
	va_start(arg_ptr, format);
	i = ft_output(format, result, arg_ptr);
	va_end(arg_ptr);
	free (result);
	return (i);
}
