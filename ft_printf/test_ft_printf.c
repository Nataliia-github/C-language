/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   test_ft_printf.c                                   :+:    :+:            */
/*                                                     +:+                    */
/*   By: ncheban <ncheban@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/11/27 12:55:28 by ncheban       #+#    #+#                 */
/*   Updated: 2021/11/30 18:26:25 by ncheban       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include "ft_printf.h"

int	main(void)
{
	char	*ptr;
	char	c;
	
	ptr = &c;
	ft_printf("  MyFunc Char: %c\n", '5');
	printf("Standart Char: %c\n", '5');
	ft_printf("  MyFunc %c,  %05d, %p\n", "55", "56", "57");
	printf("Standart %c, %05d, %p\n", '5', 56, ptr);
	// ft_printf("% Experiment %d, %c, %%, %p\n", 55, 56, 57);
	return (0);
}