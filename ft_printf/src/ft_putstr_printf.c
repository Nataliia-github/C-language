/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_putstr_printf.c                                 :+:    :+:            */
/*                                                     +:+                    */
/*   By: ncheban <ncheban@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/12/07 16:31:11 by ncheban       #+#    #+#                 */
/*   Updated: 2021/12/09 19:58:50 by ncheban       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "../libft/libft.h"

int	ft_putstr_printf(char *s, int fd)
{
	int	i;

	i = -1;
	if (s != 0)
	{
		while (s[++i] != '\0')
			ft_putchar_fd(s[i], fd);
	}
	return (ft_strlen(s));
}
