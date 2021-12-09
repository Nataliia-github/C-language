/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   test_ft_printf.c                                   :+:    :+:            */
/*                                                     +:+                    */
/*   By: ncheban <ncheban@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/11/27 12:55:28 by ncheban       #+#    #+#                 */
/*   Updated: 2021/12/09 19:50:38 by ncheban       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/libft.h"
#include "ft_printf.h"
#include <stdio.h>

int	main(void)
{
	char	*ptr;
	char	c;
	int 	ft;
	int 	st;

	c = 'c';
	ptr = &c;
	// ft_printf("Hello %c, %i, %d, %i, %u, %s, %%, %x, %X, %p\n", 'a', \
	// 	-5, 2, 3, -1, "abc", -1, -200, ptr);
	// printf("\nHello %c, %i, %d, %i, %u, %s, %%, %x, %X, %p\n", 'a', \
	// 	-5, 2, 3, -1, "abc", -1, -200, ptr);
	printf("\n");
	ft = ft_printf("Hello '%c'\n", '0');
	st = printf("Hello '%c'\n", '0');
	printf ("ft %i == %i st\n", ft, st);
	return (0);
}
