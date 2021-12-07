/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_putptr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: ncheban <ncheban@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/12/07 14:37:02 by ncheban       #+#    #+#                 */
/*   Updated: 2021/12/07 14:54:28 by ncheban       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/libft.h"
#include "ft_printf.h"

int	ft_putptr(char *ptr )
{
	int		i;
	char	*temp_ptr;
	int		size_base;
	char	*rev_res;

	temp_ptr = ptr;
	i = 0;
	while (temp_ptr > 0)
	{
		rev_res[i] = temp_ptr % 16;
		temp_ptr = temp_ptr / 16;
		++i;
	}	
	while (--i >= 0)
		ft_putchar_fd(rev_res[i], 1);
	return (i);
}
