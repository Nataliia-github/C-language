/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_putstr_printf.c                                 :+:    :+:            */
/*                                                     +:+                    */
/*   By: ncheban <ncheban@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/12/07 16:31:11 by ncheban       #+#    #+#                 */
/*   Updated: 2022/01/28 21:32:42 by nataliya      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putstr_printf(char *s)
{
	int	i;

	if (s == NULL)
		s = "(null)";
	i = 0;
	if (s != 0)
	{
		while (s[i] != '\0')
			i += write(1, &s[i], 1);
	}
	return (i);
}