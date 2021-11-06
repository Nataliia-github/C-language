/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strdup.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: ncheban <ncheban@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/11/02 15:41:39 by ncheban       #+#    #+#                 */
/*   Updated: 2021/11/06 18:33:54 by ncheban       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strdup(const char *s1)
{
	unsigned char	*s2;
	int				i;

	// if (s1 == NULL)
	// 	return (NULL);
	// i = 0;
	// while (!s1[i])
	// 	++i;
	s2 = malloc ((ft_strlen(s1) + 1) * sizeof(char));
	i = 0;
	while (s1[i] != '\0')
	{
		s2[i] = s1[i];
		++i;
	}
	s2[i] = '\0';
	return ((char *)s2);
}
