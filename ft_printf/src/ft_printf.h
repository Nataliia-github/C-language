/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_printf.h                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: ncheban <ncheban@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/11/21 12:05:06 by ncheban       #+#    #+#                 */
/*   Updated: 2022/01/29 22:19:48 by nataliya      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdio.h>
# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>
# include <stddef.h>
# include "../libft/libft.h"

// # ifndef BUFFER_SIZE
// #  define BUFF_SIZE 5000
// # endif

// # ifndef OPEN_MAX
// #  define OPEN_MAX 32
// # endif

typedef struct s_print
{
	int		start;
	int		end;
	int		index;
	int		lenght;
	char	*modifier;
	int		hidden;
	char	zero_white;
	int		space;
	int		cut_str;
	int		minus;
	int		dot;
}			t_print;

int		ft_printf(const char *input_str, ...);
int		ft_fill_metainfo(const char *format, t_print *result);
int		ft_putchar_printf(char c, t_print *metainfo, int ord);
int		ft_putstr_printf(char *s, t_print *metainfo, int ord);
int		ft_putptr_printf(unsigned long long ptr);
int		ft_putdec_printf(int num);
int		ft_puthex_printf(unsigned int hex, char upper);
char	*ft_utoa(unsigned int n);
int		ft_putuni_printf(unsigned int arg);
int		ft_putperc_printf(char c, t_print *metainfo, int ord);
void 	ft_meta_hidden(const char *s, t_print *metainfo, int ord);

#endif