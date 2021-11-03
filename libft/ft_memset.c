/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memset.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: ncheban <ncheban@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/11/02 15:40:15 by ncheban       #+#    #+#                 */
/*   Updated: 2021/11/02 15:40:17 by ncheban       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memset(void	*str, int c, size_t len)
{
	unsigned long	i;
	char			*str_1;

	i = 0;
	str_1 = (char *)str;
	while (str_1[i] != '\0' && i < len)
	{
		str_1[i] = c;
		++i;
	}
	return (0);
}
