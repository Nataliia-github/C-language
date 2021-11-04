/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_bzero.c                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: ncheban <ncheban@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/11/02 15:31:51 by ncheban       #+#    #+#                 */
/*   Updated: 2021/11/02 15:35:36 by ncheban       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	ft_bzero(void	*s, size_t n)
{
	size_t	i;
	char	*s_1;

	if (n == 0)
		return ;
	s_1 = (char *)s;
	i = 0;
	while (i < n)
	{
		s_1[i] = '\0';
		++i;
	}
}
