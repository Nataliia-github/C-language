/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_bonus.h                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: nataliya <nataliya@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/01/28 20:18:34 by nataliya      #+#    #+#                 */
/*   Updated: 2022/01/28 21:09:14 by nataliya      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdio.h>
# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>
# include "../libft/libft.h"

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

#endif