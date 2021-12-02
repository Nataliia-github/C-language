/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_printf.h                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: ncheban <ncheban@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/11/21 12:05:06 by ncheban       #+#    #+#                 */
/*   Updated: 2021/12/01 23:23:48 by nataliya      ########   odam.nl         */
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
	int		start_pos;
	int		end_pos;
	int		order;
	int		lenght;
	struct 	s_print	*next;
}			t_print;

int		ft_printf(const char *restrict input_str, ...);
void	ft_putnbr_base(int nbr, char *base);

#endif