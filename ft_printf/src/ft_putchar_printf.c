/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_putchar_printf.c                                :+:    :+:            */
/*                                                     +:+                    */
/*   By: ncheban <ncheban@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/12/07 15:03:54 by ncheban       #+#    #+#                 */
/*   Updated: 2022/01/22 21:05:17 by nataliya      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putchar_printf(char c)
{
	write (1, &c, 1);
	return (1);
}
