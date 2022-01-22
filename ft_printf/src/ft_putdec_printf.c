/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_putdec_printf.c                                 :+:    :+:            */
/*                                                     +:+                    */
/*   By: ncheban <ncheban@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/12/09 16:38:13 by ncheban       #+#    #+#                 */
/*   Updated: 2022/01/22 21:15:01 by nataliya      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/libft.h"
#include "ft_printf.h"

int	ft_putdec_printf(int arg)
{
	int		print_len;
	char	*str;

	str = ft_itoa(arg);
	print_len = ft_putstr_printf(str);
	free(str);
	return (print_len);
}
