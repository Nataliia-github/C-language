/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   test_ft_printf.c                                   :+:    :+:            */
/*                                                     +:+                    */
/*   By: ncheban <ncheban@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/11/27 12:55:28 by ncheban       #+#    #+#                 */
/*   Updated: 2022/01/31 16:37:39 by nataliya      ########   odam.nl         */
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
	// ft_printf("Hello, %-c, %i, %d, %i, %u, %-7s, %%, %x, %X, %p\n", 'a', \
	// 	-5, 2, 3, -1, "abc", -1, -200, ptr);
	// printf("\nHello, %-c, %i, %d, %i, %u, %-7s, %%, %x, %X, %p\n", 'a', \
	// 	-5, 2, 3, -1, "abc", -1, -200, ptr);

//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
//		c - char
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
	// // ft_printf("%1c%2c%3c%4c\n", 'a', 'b', 'c', 'd');
	// printf("%1c%2c%3c%4c\n", 'a', 'b', 'c', 'd');
	// ft_printf("%c %c %c\n", '0', 0, '1');
	// printf("%c %c %c\n", '0', 0, '1');

//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
//		s - string
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
	// ft_printf("hello, %s.\n", "gavin");
	// printf("hello, %s.", "gavin");

	// ft_printf("1 '%.3s'\n", "hello");
	// printf("2 '%.3s'", "hello"); /* no before "-" '0# +' modificator '-(alignt)digits(space).digits(minus_len if less then len)' */

	// ft_printf("'%-.7s'\n", "world");
	// printf("'%-.7s'", "world");

	// ft_printf("'%s'\n", "testing testing");
	// printf("'%s'\n", "testing testing");

	// ft_printf("'%7.5s'\n", "bombastic");
	// printf("'%7.5s'", "bombastic");

	// ft_printf("'hello, world'%----.c!'\n", 'Y');
	// printf("'hello, world'%----c!'", 'Y');

	// ft_printf("1'%-05%'\n");
	// printf("2'%-05%'");

	// ft_printf("'%s'\n", NULL);
	// ft_printf("%3.s\n", s_hidden);
	// ft_printf("%10.s\n", s_hidden);

	// ft_printf("1'%3.s'\n", "Helloooooo");
	// printf("'%3.s'\n", NULL);

	// ft_printf("2'%10.s'\n", NULL);
	// printf("'%10.s'\n", NULL);

	// ft_printf("3'%-10.s'\n", " ");
	// printf("3'%-10.s'\n", " ");

	// printf("4'%-1.s'", "\0");
	// printf("hello, %s.", NULL);

	// ft_printf("1 '%s'\n", NULL);
	// printf("2 '%s'", NULL); 

	// ft_printf(" NULL %s NULL ", NULL);
	// printf(" NULL %s NULL ", NULL);

//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
//		p - pointer
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

	// ft_printf(" %p ", -1);
	// printf(" %p ", -1);

	// ft_printf(" %p ", -1);
	// printf(" %p ", -1);
	
	// ft_printf(" %p ", 9223372036854775808);
	// printf(" %p ", 9223372036854775808);

//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
//		% - percent
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

	// ft_printf(" %%%%%% ");
	// printf(" %%%%%% ");

//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
//		i - integer
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

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

//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
//		x - hexadecimal
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

	// ft_printf("1 %X \n", -1);
	// printf("2 %X \n", -1);
	
	// ft_printf("1 %X \n", 16);
	// printf("2 %X \n", 16);

//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
//		p - pointer
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

	// ft_printf("'%p'\n", p);
	// printf("'%p'", p);

	// ft_printf(" %-1p %-2p ", 0, 0);
	// printf(" %-1p %-2p ", NULL, NULL);

	// ft_printf("1%5%\n");
	// printf("2%5%\n");

	printf("\n");
	// system("leaks a.out");
	// exit (0);
	return (0);
}
