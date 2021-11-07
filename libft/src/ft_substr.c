/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_substr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: nataliya <nataliya@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/11/07 10:43:05 by nataliya      #+#    #+#                 */
/*   Updated: 2021/11/07 11:29:42 by nataliya      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <string.h>
#include <stdlib.h>
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	unsigned int	s_len;
	unsigned int	i;

	if (s == NULL)
		return (NULL);
	s_len = ft_strlen(s);
	if (s_len < start)
	{
		if ((substr = malloc(1 * sizeof(char))) == NULL)
			return (NULL);
		substr[0] = '\0';
		return (substr);
	}
	if ((substr = malloc((len + 1) * sizeof(char))) == NULL)
		return (NULL);
	i = 0;
	while (i < len)
	{
		substr[i] = s[start + i];
		++i; 
	}
	substr[i] = '\0';
	return (substr);
}
