/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strdup.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: ncheban <ncheban@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/11/02 15:41:39 by ncheban       #+#    #+#                 */
/*   Updated: 2021/11/02 15:41:41 by ncheban       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(const char *s1)
{
	const char	*s2;
	int			i;

	if (s1 == NULL)
		return (NULL);
	i = 0;
	while (!s1[i])
		++i;
	s2 = malloc (i * sizeof(const char));
	i = 0;
	while (s1[i] != '\0')
	{
		s2 = s1;
		++i;
	}
	return ((char *)s2);
}
