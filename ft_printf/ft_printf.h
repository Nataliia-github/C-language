/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_printf.h                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: ncheban <ncheban@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/11/21 12:05:06 by ncheban       #+#    #+#                 */
/*   Updated: 2021/11/30 18:14:32 by ncheban       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

#include "libft/libft.h"
#include <stdarg.h>
#include <stdio.h>

# ifndef BUFFER_SIZE
#  define BUFF_SIZE 5000
# endif

# ifndef OPEN_MAX
#  define OPEN_MAX 32
# endif

typedef struct s_print
{
	va_list	args_out;
	int		width;
	int		pricision;
	int		zero;
	int		point;
	int		dash;
	int		total_lenght;
	int		neg;
	int		is_zero;
	int		space_fl;
}			t_print;

int		ft_printf(const char *restrict input_str, ...);
void	ft_putnbr_base(int nbr, char *base);

#endif