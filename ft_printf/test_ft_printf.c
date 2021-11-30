/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   test_ft_printf.c                                   :+:    :+:            */
/*                                                     +:+                    */
/*   By: ncheban <ncheban@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/11/27 12:55:28 by ncheban       #+#    #+#                 */
/*   Updated: 2021/11/30 13:16:57 by ncheban       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include "ft_printf.h"

int	main(void)
{
	ft_printf("% Experiment %d, %c %%\n", "55", "56", "57");
	// ft_printf("% Experiment %d, %c %%\n", 55, 56, 57);
	return (0);
}