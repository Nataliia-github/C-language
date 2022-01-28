/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_putuni_printf.c                                 :+:    :+:            */
/*                                                     +:+                    */
/*   By: ncheban <ncheban@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/12/14 11:48:35 by ncheban       #+#    #+#                 */
/*   Updated: 2022/01/26 17:13:49 by nataliya      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/libft.h"
#include "ft_printf.h"

int	ft_putuni_printf(unsigned int arg)
{
	int		print_len;
	char	*str;

	str = ft_utoa(arg);
	ft_putstr_fd(str, 1);
	print_len = ft_strlen(str);
	free(str);
	return (print_len);
}
