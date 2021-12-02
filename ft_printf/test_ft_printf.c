/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   test_ft_printf.c                                   :+:    :+:            */
/*                                                     +:+                    */
/*   By: ncheban <ncheban@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/11/27 12:55:28 by ncheban       #+#    #+#                 */
/*   Updated: 2021/12/02 17:58:20 by ncheban       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include "ft_printf.h"
#include <stdio.h>

int	main(void)
{
	char	*ptr;
	char	c;
	
	ptr = &c;
	ft_printf("First element %c, second element %d, third element %i", 'a', 2, 3);
	ft_printf("First element %X, second element %x, third element %%", 0, 2, 3);
	// printf("First element %c,second element %d, third element %i", 'a', 2, 3);
	return (0);
}