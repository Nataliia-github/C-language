/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strjoin.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: nataliya <nataliya@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/11/07 11:38:01 by nataliya      #+#    #+#                 */
/*   Updated: 2021/11/14 13:29:34 by ncheban       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

/* concatenates two strings. */

#include <stdlib.h>
#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char			*strj;
	unsigned int	s1_len;
	unsigned int	s2_len;
	unsigned int	i;

	if (!s1 || !s2)
		return (NULL);
	s1_len = ft_strlen(s1);
	s2_len = ft_strlen(s2);
	strj = (char *)malloc((s1_len + s2_len + 1) * sizeof(char));
	if (!strj)
		return (NULL);
	i = 0;
	while (s1[i] != '\0')
	{
		strj[i] = s1[i];
		++i;
	}
	while (s2[i - s1_len] != '\0')
	{
		strj[i] = s2[i - s1_len];
		++i;
	}
	strj[i] = '\0';
	return (strj);
}
