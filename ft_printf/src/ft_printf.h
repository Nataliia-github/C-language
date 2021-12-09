/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_printf.h                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: ncheban <ncheban@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/11/21 12:05:06 by ncheban       #+#    #+#                 */
/*   Updated: 2021/12/09 19:45:58 by ncheban       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdio.h>
# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>
#include "../libft/libft.h"

# ifndef BUFFER_SIZE
#  define BUFF_SIZE 5000
# endif

# ifndef OPEN_MAX
#  define OPEN_MAX 32
# endif

typedef struct s_print
{
	int		start;
	int		end;
	int		order;
	int		lenght;
}			t_print;

int		ft_printf(const char *input_str, ...);
int		ft_putnbr_base(int nbr, char *base);
int		ft_fill_result(const char *format, t_print *result);
int		ft_putchar_printf(char c, int fd);
int		ft_putstr_printf(char *s, int fd);
int		ft_putptr_printf(unsigned long long ptr, int fd);
int		ft_putdec_printf(int num, int fd);
int		ft_puthex_printf(unsigned long long hex, int fd, char upper);
char	*ft_utoa(unsigned int n);

#endif