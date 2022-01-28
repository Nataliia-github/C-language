/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_putchar_printf.c                                :+:    :+:            */
/*                                                     +:+                    */
/*   By: nataliya <nataliya@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/01/28 20:26:49 by nataliya      #+#    #+#                 */
/*   Updated: 2022/01/28 21:10:40 by nataliya      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putchar_printf(char c)
{
	int	print_len;

	print_len = write(1, &c, 1);
	return (print_len);
}