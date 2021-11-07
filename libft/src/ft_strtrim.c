/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strtrim.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: nataliya <nataliya@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/11/07 12:28:13 by nataliya      #+#    #+#                 */
/*   Updated: 2021/11/07 14:59:21 by nataliya      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

char	*ft_strtrim(char const *s1, char const *s2)
{
	char	*strt;
	int		pref;
	int		suf;
	int		strt_len;

	if (s1 == NULL || s2 == NULL)
		return (NULL);

	pref = 0;
	while (s1[pref] != '\0' && ft_strchr(s2, s1[pref]) != 0)
		++pref;
	suf = 0;
	while ((ft_strlen(s1) - suf) > 0 && ft_strrchr(s2, s1[(ft_strlen(s1) - suf)]) != 0)
		++suf;
	strt_len = (ft_strlen(s1) - pref - suf);
	strt = malloc(strt_len * sizeof(char));
	if (strt_len != 0)
		strt = ft_substr(s1, pref, (strt_len + 1));
	return (strt);
}
