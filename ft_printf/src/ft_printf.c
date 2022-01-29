/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_printf.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: ncheban <ncheban@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/11/21 12:00:07 by ncheban       #+#    #+#                 */
/*   Updated: 2022/01/29 16:18:32 by nataliya      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/libft.h"
#include "ft_printf.h"

static int	ft_print_type(t_print *metainfo, const char *format, \
	int ord, va_list arg_ptr)
{
	int	i;
	int	print_len;

	i = metainfo[ord].end;
	print_len = 0;
	if (format[i] == 'c')
		print_len = ft_putchar_printf(va_arg(arg_ptr, int), metainfo, ord);
	else if (format[i] == 's')
		print_len = ft_putstr_printf(va_arg(arg_ptr, char *), metainfo, ord);
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
}

static int	ft_output(const char *format, t_print *metainfo, va_list arg_ptr)
{
	int	i;
	int	res_modif;
	int	ord;
	int	print_len;

	i = 0;
	ord = 0;
	print_len = 0;
	res_modif = 0;
	while (format[i] != '\0')
	{
		if (i == metainfo[ord].start)
		{
			res_modif = ft_print_type(metainfo, format, ord, arg_ptr);
			if (res_modif >= 0)
			{
				print_len += res_modif;
				i = metainfo[ord].end + 1;
				++ord;
			}
			else
				return (-1);
		}
		else
		{
			print_len += write(1, &format[i], 1);
			++i;
		}
	}
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
		if (format[i] == '%')
			++j;
		++i;
	}
	return (j);
}

// static void	ft_free_metainfo(t_print *metainfo, int ord)
// {
// 	int	i;

// 	i = 0;
// 	while (i < ord)
// 	{
// 		if (metainfo[i].modifier != NULL)
// 		{
// 			free(metainfo[i].modifier);
// 		}
// 		++i;
// 	}
// 	free (metainfo);
// }

int	ft_printf(const char *format, ...)
{
	t_print	*metainfo;
	int		ord;
	va_list	arg_ptr;
	int		print_len;

	ord = 0;
	print_len = 0;
	if (format == NULL)
		return (0);
	metainfo = (t_print *)malloc(ft_count_perc(format) * sizeof(t_print));
	if (metainfo == NULL)
		return (0);
	ord = ft_fill_metainfo(format, metainfo);
	if (ord == 0)
		print_len = ft_putstr_printf((char *)format, metainfo, ord);
	else if (ord < 0)
		return(-1);
	else
	{
		va_start(arg_ptr, format);
		print_len = ft_output(format, metainfo, arg_ptr);
		va_end(arg_ptr);
	}
	// ft_free_metainfo(metainfo, ord);
	free(metainfo);
	return (print_len);
}