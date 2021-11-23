/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_substr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: nataliya <nataliya@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/11/07 10:43:05 by nataliya      #+#    #+#                 */
/*   Updated: 2021/11/19 15:43:34 by ncheban       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

/* returns a substring from a string. */

#include <stddef.h>
#include <string.h>
#include <stdlib.h>
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*substr;
	unsigned int	i;

	i = 0;
	if (s == NULL || start < 0)
		return (NULL);
	substr = malloc((len + 1) * sizeof(char));
	if (substr == NULL)
		return (NULL);
	if (ft_strlen(s) >= start)
	{	
		while (i < len && s[start + i] != '\0')
		{
			substr[i] = s[start + i];
			++i;
		}
	}
	substr[i] = '\0';
	return (substr);
}