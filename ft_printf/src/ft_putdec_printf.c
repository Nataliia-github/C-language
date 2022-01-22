/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_putdec_printf.c                                 :+:    :+:            */
/*                                                     +:+                    */
/*   By: ncheban <ncheban@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/12/09 16:38:13 by ncheban       #+#    #+#                 */
/*   Updated: 2022/01/22 22:39:23 by nataliya      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/libft.h"
#include "ft_printf.h"

int	ft_putdec_printf(int num)
{
	int		print_len;
	char	*str;

	str = ft_itoa(num);
	print_len = ft_putstr_printf(str);
	free(str);
	return (print_len);
}
