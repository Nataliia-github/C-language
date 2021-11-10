/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_substr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: nataliya <nataliya@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/11/07 10:43:05 by nataliya      #+#    #+#                 */
/*   Updated: 2021/11/10 19:15:03 by nataliya      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <string.h>
#include <stdlib.h>
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*substr;
	unsigned int	i;

	i = 0;
	if (s == NULL || len == 0)
		return (NULL);
	substr = malloc((len + 1) * sizeof(char));
	if (substr == NULL)
		return (NULL);
	if 	(ft_strlen(s) > start)
	{	
		while (i < len)
			{
				substr[i] = s[start + i];
				++i; 
			}
	}
	substr[i] = '\0';
	return (substr);
}

// char	*ft_substr(char const *s, unsigned int start, size_t len)
// {
// 	char			*substr;
	
// 	substr = malloc((len + 1) * sizeof(char));
// 	if (substr == NULL)
// 		return (NULL);
// 	if (ft_strlen(s) >= start)
// 		substr[0] = '\0';
// 	else
// 	{
// 		ft_memcpy(substr, (s + start), len);
// 		substr[len] = '\0';
// 	}	
// 	return (substr);
// }

// char	*ft_substr(char const *s, unsigned int start, size_t len)
// {
// 	unsigned char		*sub;
// 	sub = malloc(sizeof(char) * (len + 1));
// 	if (!sub)
// 		return (NULL);
// 	if (start >= ft_strlen(s))
// 		*sub = '\0';
// 	else
// 	{
// 		ft_memcpy(sub, s + start, len);
// 		*(sub + len) = '\0';
// 	}
// 	return ((char *)sub);
// }