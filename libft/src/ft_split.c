/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_split.c                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: nataliya <nataliya@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/11/08 17:47:27 by nataliya      #+#    #+#                 */
/*   Updated: 2021/11/08 18:08:57 by nataliya      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_count_words(char const *s, char c)
{
	int	words;
	int	i;

	words = 0;
	while (s[i] != '\0')
	{
		if ((s[i + 1] == c || s[i + 1] == '\0') && (s[i] != c || s[i] != '\0'))
			++words;
		++i;
	}
	return (words);
}

char **ft_in_split(char **res, char const *s, int words)
{
	
}

char	**ft_split(char const *s, char c)
{
	char	**res;
	int		words;

	if (s == NULL || c == 0)
		return (NULL);
	words = ft_count_words (s, c);
	res = (char	**)malloc((words + 1) * sizeof(char *));
	if (res == NULL)
		return (NULL);
	res[words] = 0;
	res = ft_in_split(res, s, words);
	return(res);
}