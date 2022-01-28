/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_putdec_printf.c                                 :+:    :+:            */
/*                                                     +:+                    */
/*   By: ncheban <ncheban@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/12/09 16:38:13 by ncheban       #+#    #+#                 */
/*   Updated: 2022/01/26 17:12:05 by nataliya      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/libft.h"
#include "ft_printf.h"

int	ft_putdec_printf(int num)
{
	int		print_len;
	char	*str;

	str = ft_itoa(num);
	ft_putstr_fd(str, 1);
	print_len = ft_strlen(str);
	free(str);
	return (print_len);
}
