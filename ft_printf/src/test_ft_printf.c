/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   test_ft_printf.c                                   :+:    :+:            */
/*                                                     +:+                    */
/*   By: ncheban <ncheban@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/11/27 12:55:28 by ncheban       #+#    #+#                 */
/*   Updated: 2021/12/07 14:27:01 by ncheban       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/libft.h"
#include "ft_printf.h"
#include <stdio.h>

int	main(void)
{
	char	*ptr;
	char	c;

	c = 'c';
	ptr = &c;
	ft_printf("Hello %c, %i, %d, %i, %u, %s, %%, %x, %X\n", 'a', \
		-5, 2, 3, -1, "abc", 123456789, 123456789);
	printf("Hello %c, %i, %d, %i, %i, %s, %%, %x, %X\n", 'a', \
		-5, 2, 3, -1, "abc", 123456789, 123456789);
	return (0);
}
