/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_printf.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: ncheban <ncheban@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/11/21 12:00:07 by ncheban       #+#    #+#                 */
/*   Updated: 2021/11/27 16:34:43 by ncheban       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdarg.h>
#include "../libft/libft.h"
#include "ft_printf.h"

int	ft_printf(const char *restrict input_str, ...)
{
	va_list	arg_valist;
//	va_list	cp_arg;
	int		done;

	va_start(arg_valist, input_str);
//	cp_arg = 0;
	done = 0;
	while (va_arg (arg_valist, char *))
		printf("%s\n", (char *)arg_valist);
	ft_putstr_fd((char	*)input_str, 1);
	// ft_putstr_fd(va_arg (arg_valist, char	*), 1);
	// ft_putstr_fd(va_arg (arg_valist, char	*), 1);
	va_end(arg_valist);
	return (done);
}
