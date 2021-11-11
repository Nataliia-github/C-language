/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strmapi.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: ncheban <ncheban@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/11/11 18:24:46 by ncheban       #+#    #+#                 */
/*   Updated: 2021/11/11 18:39:10 by ncheban       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*map;
	size_t	i;

	map = (char *)malloc((ft_strlen(s) + 1) * sizeof(char));
	if (map == NULL)
		return (NULL);
	i = 0;
	while (i < ft_strlen(s))
	{
		map[i] = f(i, s[i]);
		++i;
	}
	map[i] = '\0';
	return (map);
}
