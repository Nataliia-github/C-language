/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_printf.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: ncheban <ncheban@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/11/21 12:00:07 by ncheban       #+#    #+#                 */
/*   Updated: 2021/11/21 14:26:04 by ncheban       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdarg.h>
#include "../libft/src/libft.h"

int	ft_printf(const char *restrict input_str, ...)
{
	va_list	arg_valist;
	va_list	cp_arg;
	int		how_many_args;
	int		done;

	va_start(arg_valist, input_str);
	how_many_args = 0;
	cp_arg = 
	while (va_arg (arg_valist, char	*))
		++how_many_args;
	ft_putnbr_fd(how_many_args, 1);
	// ft_putstr_fd((char	*)input_str, 1);
	// ft_putstr_fd(va_arg (arg_valist, char	*), 1);
	// ft_putstr_fd(va_arg (arg_valist, char	*), 1);
	va_end(arg_valist);
	return (done);
}

int	main(void)
{
	ft_printf("bla-bla-bla\n", 9, 10);
	return (0);
}
