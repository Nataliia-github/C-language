/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   test_ft_printf.c                                   :+:    :+:            */
/*                                                     +:+                    */
/*   By: ncheban <ncheban@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/11/27 12:55:28 by ncheban       #+#    #+#                 */
/*   Updated: 2021/12/11 19:44:47 by ncheban       ########   odam.nl         */
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
	void *p;

	p = malloc(7);
    p = 0;
	// ft_printf("Hello %c, %i, %d, %i, %u, %s, %%, %x, %X, %p\n", 'a', \
	// 	-5, 2, 3, -1, "abc", -1, -200, ptr);
	// printf("\nHello %c, %i, %d, %i, %u, %s, %%, %x, %X, %p\n", 'a', \
	// 	-5, 2, 3, -1, "abc", -1, -200, ptr);
	// // ft_printf("%1c%2c%3c%4c\n", 'a', 'b', 'c', 'd');
	// printf("%1c%2c%3c%4c\n", 'a', 'b', 'c', 'd');
	ft_printf("%c %c %c\n", '0', 0, '1');
	// printf("%c %c %c\n", '0', 0, '1');
	// printf("\n");
	system("leaks a.out");
	// exit (0);
	return (0);
}
