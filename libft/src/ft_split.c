/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_split.c                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: nataliya <nataliya@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/11/08 17:47:27 by nataliya      #+#    #+#                 */
/*   Updated: 2021/11/14 13:23:21 by ncheban       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

/*  splits a string using a char as parameter (delimeter). */

#include "libft.h"

int	ft_count_words(char const *s, char c)
{
	int	words;
	int	i;

	words = 0;
	i = 0;
	while (s[i] != '\0')
	{
		if ((s[i + 1] == c || s[i + 1] == '\0') && s[i] != c)
			++words;
		++i;
	}
	return (words);
}

int	ft_split_it(char **res, char const *s, char c)
{
	int		i;
	int		letters;
	int		words;

	i = 0;
	words = 0;
	while (s[i] != '\0')
	{
		while (s[i] == c && s[i] != '\0')
			++i;
		letters = 0;
		while (s[i + letters] != c && s[i + letters] != '\0')
			++letters;
		res[words] = (char *)malloc((letters + 1) * sizeof(char));
		if (res[words] == NULL)
			return (0);
		res[words] = ft_substr(s, i, letters);
		i = i + letters;
		++words;
	}
	return (0);
}

char	**ft_split(char const *s, char c)
{
	char	**res;
	int		words;
	int		i;

	if (s == NULL)
		return (NULL);
	i = 0;
	words = ft_count_words (s, c);
	res = (char **)malloc((words + 1) * sizeof(char *));
	if (res == NULL)
		return (NULL);
	res[words] = 0;
	ft_split_it(res, s, c);
	return (res);
}
