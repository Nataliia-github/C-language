/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_bonus.h                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: nataliya <nataliya@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/01/28 20:18:34 by nataliya      #+#    #+#                 */
/*   Updated: 2022/01/29 09:10:10 by nataliya      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_BONUS_H
# define FT_BONUS_H

# include <stdio.h>
# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>
# include "../libft/libft.h"
# include "ft_printf.h"

// typedef struct s_print
// {
// 	int		start;
// 	int		end;
// 	int		index;
// 	int		lenght;
// 	char	*modifier;
// 	char	zero_white;
// 	int		space;
// 	int		cut_str;
// 	int		minus;
// 	int		dot;
// }			t_print;

int		ft_bonus (t_print *metainfo, const char *format, \
	int ord, va_list arg_ptr);
int		ft_fill_meta_bonus(const char *mod, t_print *metainfo, int ord);
int		ft_putchar_bonus(char c, t_print *metainfo, int ord);
int		ft_putstr_bonus(char *s, t_print *metainfo, int ord);

#endif