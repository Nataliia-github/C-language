/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_split.c                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: nataliya <nataliya@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/11/08 17:47:27 by nataliya      #+#    #+#                 */
/*   Updated: 2021/11/25 20:14:27 by ncheban       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

/*  splits a string using a char as parameter (delimeter). */

#include "libft.h"

static	int	ft_count_words(char const *s, char c)
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

static void	ft_free_mem(char **res, int words)
{
	int	i;

	i = 0;
	while (i < words)
	{
		free (res[i]);
		++i;
	}
	free (res);
}

static	void	ft_split_it(char **res, char const *s, char c)
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
		if (letters == 0)
			break ;
		res[words] = ft_substr(s, i, letters);
		if (res[words] == NULL)
			ft_free_mem(res, words);
		i = i + letters;
		++words;
	}
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
