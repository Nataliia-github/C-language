/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_putuni_printf.c                                 :+:    :+:            */
/*                                                     +:+                    */
/*   By: ncheban <ncheban@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/12/14 11:48:35 by ncheban       #+#    #+#                 */
/*   Updated: 2022/01/22 21:16:32 by nataliya      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/libft.h"
#include "ft_printf.h"

int	ft_putuni_printf(unsigned int arg)
{
	int		print_len;
	char	*str;

	str = ft_utoa(arg);
	print_len = ft_putstr_printf(str);
	free(str);
	return (print_len);
}
