/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_printf.h                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: ncheban <ncheban@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/11/21 12:05:06 by ncheban       #+#    #+#                 */
/*   Updated: 2022/01/25 10:13:23 by nataliya      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdio.h>
# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>
// # include "../libft/libft.h"

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
	int		index;
	int		lenght;
	char	*modifier;
}			t_print;

int		ft_printf(const char *input_str, ...);
int		ft_fill_metainfo(const char *format, t_print *result);
int		ft_putchar_printf(char c);
int		ft_putstr_printf(char *s);
int		ft_putptr_printf(unsigned long long ptr);
int		ft_putdec_printf(int num);
int		ft_puthex_printf(unsigned int hex, char upper);
char	*ft_utoa(unsigned int n);
int		ft_putuni_printf(unsigned int arg);

#endif