/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_putstr_printf.c                                 :+:    :+:            */
/*                                                     +:+                    */
/*   By: ncheban <ncheban@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/12/07 16:31:11 by ncheban       #+#    #+#                 */
/*   Updated: 2021/12/11 21:13:21 by ncheban       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "../libft/libft.h"

int	ft_putstr_printf(char *s, int fd)
{
	int	i;
	int	res;

	i = -1;
	if (s != 0)
	{
		while (s[++i] != '\0')
			ft_putchar_fd(s[i], fd);
	}
	res = ft_strlen(s);
	return (res);
}
