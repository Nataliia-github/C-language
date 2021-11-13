/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strtrim.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: nataliya <nataliya@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/11/07 12:28:13 by nataliya      #+#    #+#                 */
/*   Updated: 2021/11/13 15:35:04 by nataliya      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

/* Allocates (with malloc(3)) and returns a copy of */
/* ’s1’ with the characters specified in ’set’ removed */
/* from the beginning and the end of the string. */

#include <string.h>
#include "libft.h"

char	*ft_strtrim(char const *s1, char const *s2)
{
	char	*strt;
	int		pref;
	int		suf;
	int		strt_len;

	if (s1 == NULL)
		return (NULL);
	if (s2 == NULL)
		return ((char *)s1);
	pref = 0;
	while (s1[pref] != '\0' && ft_strchr(s2, s1[pref]) != 0)
		++pref;
	suf = 0;
	while ((ft_strlen(s1) - suf) > 0 && ft_strrchr(s2, s1[(ft_strlen(s1) - suf)]) != 0)
		++suf;
	if ((pref + suf) > (int)ft_strlen(s1))
		return ((char *)ft_calloc(sizeof(char), 1));
	strt_len = (ft_strlen(s1) - pref - suf);
	strt = malloc(strt_len * sizeof(char));
	if (strt_len > 0)
		strt = ft_substr(s1, pref, (strt_len + 1));
	return (strt);
}
