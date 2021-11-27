/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_printf.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: ncheban <ncheban@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/11/21 12:00:07 by ncheban       #+#    #+#                 */
/*   Updated: 2021/11/27 18:52:42 by ncheban       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdarg.h>
#include "../libft/libft.h"
// #include "ft_printf.h"

int	ft_printf(const char *restrict input_str, ...)
{
	va_list	arg_ptr;
	int		i;

	va_start(arg_ptr, input_str);
	printf ("%s\n", input_str);
	i = 0;
	printf ("%i\n", i);
	va_end(arg_ptr);
	return (0);
}
