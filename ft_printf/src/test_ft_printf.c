/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   test_ft_printf.c                                   :+:    :+:            */
/*                                                     +:+                    */
/*   By: ncheban <ncheban@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/11/27 12:55:28 by ncheban       #+#    #+#                 */
/*   Updated: 2022/01/22 22:22:41 by nataliya      ########   odam.nl         */
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
    p = &c;
	ft_printf("Hello %c, %i, %d, %i, %u, %s, %%, %#x, %#X, %p\n", 'a', \
		-5, 2, 3, -1, "abc", -1, -200, ptr);
	printf("\nHello %c, %i, %d, %i, %u, %s, %%, %#x, %#X, %p\n", 'a', \
		-5, 2, 3, -1, "abc", -1, -200, ptr);
	// // ft_printf("%1c%2c%3c%4c\n", 'a', 'b', 'c', 'd');
	// printf("%1c%2c%3c%4c\n", 'a', 'b', 'c', 'd');
	// ft_printf("%c %c %c\n", '0', 0, '1');
	// printf("%c %c %c\n", '0', 0, '1');

	// ft_printf(" %p ", -1);
	// printf(" %p ", -1);

	// ft_printf(" %p ", -1);
	// printf(" %p ", -1);
	
	// ft_printf(" %p ", 9223372036854775808);
	// printf(" %p ", 9223372036854775808);


	// ft_printf(" NULL %s NULL ", NULL);
	// printf(" NULL %s NULL ", NULL);

	// ft_printf(" %%%%%% ");
	// printf(" %%%%%% ");

	// ft_printf(" %i \n", -1);
	// printf(" %i \n", -1);
	
	// ft_printf(" %i \n", 100);
	// printf(" %i \n", 100);
	
	// ft_printf(" %i \n", 101);
	// printf(" %i \n", 101);
	
	// ft_printf(" %i \n", 2147483647);
	// printf(" %i \n", 2147483647);
	
	// ft_printf(" %i \n", -2147483648);
	// printf(" %i \n", -2147483648);

	// ft_printf("1 %X \n", -1);
	// printf("2 %X \n", -1);
	
	// ft_printf("1 %X \n", 16);
	// printf("2 %X \n", 16);

	// ft_printf(" %p ", p);
	// printf(" %p ", p);

	// ft_printf("1%5%\n");
	// printf("2%5%\n");

	printf("\n");
	// system("leaks a.out");
	// exit (0);
	return (0);
}
