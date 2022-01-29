/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_bonus.c                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: nataliya <nataliya@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/01/28 21:08:15 by nataliya      #+#    #+#                 */
/*   Updated: 2022/01/29 09:19:41 by nataliya      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "ft_bonus.h"

// static int	ft_print_simple(t_print *metainfo, const char *format, \
// 	int ord, va_list arg_ptr)
// {
// 	int	i;
// 	int	print_len;

// 	i = metainfo[ord].end;
// 	print_len = 0;
// 	if (format[i] == 'c')
// 		print_len = ft_putchar_bonus(va_arg(arg_ptr, int), metainfo, ord);
// 	else if (format[i] == 's')
// 		print_len = ft_putstr_bonus(va_arg(arg_ptr, char *), metainfo, ord);
// 	else if (format[i] == 'p')
// 		print_len = ft_putptr_printf(va_arg(arg_ptr, unsigned long long));
// 	else if (format[i] == 'i' || format[i] == 'd')
// 		print_len = ft_putdec_printf(va_arg(arg_ptr, int));
// 	else if (format[i] == 'u')
// 		print_len = ft_putuni_printf(va_arg(arg_ptr, unsigned int));
// 	else if (format[i] == 'x' || format[i] == 'X')
// 		print_len = ft_puthex_printf(va_arg(arg_ptr, int), format[i]);
// 	else if (format[i] == '%')
// 		print_len = ft_putperc_printf('%', metainfo, ord);
// 	return (print_len);
// }

// static int	ft_output(const char *format, t_print *metainfo, va_list arg_ptr)
// {
// 	int	i;
// 	// int	res_modif;
// 	int	ord;
// 	int	print_len;

// 	i = 0;
// 	ord = 0;
// 	print_len = 0;
// 	// res_modif = 0;
// 	while (format[i] != '\0')
// 	{
// 		if (i == metainfo[ord].start)
// 		{
// 			print_len = ft_print_simple(metainfo, format, ord, arg_ptr);
// 			if (print_len >= 0)
// 			{
// 				i = metainfo[ord].end + 1;
// 				++ord;
// 			}
// 			else
// 				return (-1);
// 		}
// 		else
// 		{
// 			print_len += write(1, &format[i], 1);
// 			++i;
// 		}
// 	}
// 	return (print_len);
// }

// static int	ft_count_perc(const char *format)
// {
// 	int	i;
// 	int	j;

// 	i = 0;
// 	j = 0;
// 	while (format[i] != '\0')
// 	{
// 		if (format[i] == '%')
// 			++j;
// 		++i;
// 	}
// 	return (j);
// }

// static void	ft_free_metainfo(t_print *metainfo, int ord)
// {
// 	int	i;

// 	i = 0;
// 	while (i < ord)
// 	{
// 		if (metainfo[i].modifier != NULL)
// 			free(metainfo[i].modifier);
// 		++i;
// 	}
// 	free (metainfo);
// }

int	ft_bonus (t_print *metainfo, const char *format, \
	int ord, va_list arg_ptr)
{
	int	i;
	int	print_len;

	i = metainfo[ord].end;
	print_len = 0;
	if (format[i] == 'c')
		print_len = ft_putchar_bonus(va_arg(arg_ptr, int), metainfo, ord);
	else if (format[i] == 's')
		print_len = ft_putstr_printf(va_arg(arg_ptr, char *));
	else if (format[i] == 'p')
		print_len = ft_putptr_printf(va_arg(arg_ptr, unsigned long long));
	else if (format[i] == 'i' || format[i] == 'd')
		print_len = ft_putdec_printf(va_arg(arg_ptr, int));
	else if (format[i] == 'u')
		print_len = ft_putuni_printf(va_arg(arg_ptr, unsigned int));
	else if (format[i] == 'x' || format[i] == 'X')
		print_len = ft_puthex_printf(va_arg(arg_ptr, int), format[i]);
	else if (format[i] == '%')
		print_len = ft_putperc_printf('%', metainfo, ord);
	return (print_len);
	return (print_len);
}
