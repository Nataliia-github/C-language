/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strtrim.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: nataliya <nataliya@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/11/07 12:28:13 by nataliya      #+#    #+#                 */
/*   Updated: 2021/11/25 20:10:02 by ncheban       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

/* trims the beginning and end of a string with a specific set of chars. */

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
	while ((ft_strlen(s1) - suf) > 0
		&& ft_strrchr(s2, s1[(ft_strlen(s1) - suf)]) != 0)
		++suf;
	if ((pref + suf) > (int)ft_strlen(s1))
		return ((char *)ft_calloc(sizeof(char), 1));
	strt_len = (ft_strlen(s1) - pref - suf);
	strt = ft_substr(s1, pref, (strt_len + 1));
	return (strt);
}
