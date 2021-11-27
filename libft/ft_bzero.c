/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_bzero.c                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: ncheban <ncheban@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/11/02 15:31:51 by ncheban       #+#    #+#                 */
/*   Updated: 2021/11/27 16:58:42 by ncheban       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

/* The bzero() function writes n zeroed bytes to the string s.		*/
/* If n is zero, bzero() does nothing								*/

#include "libft.h"

void	ft_bzero(void	*s, size_t n)
{
	char	*s_1;

	if (n != 0)
	{	
		s_1 = (char *)s;
		while (n > 0)
			s_1[--n] = '\0';
	}
	return ;
}
