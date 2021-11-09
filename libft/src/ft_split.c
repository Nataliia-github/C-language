/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_split.c                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: nataliya <nataliya@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/11/08 17:47:27 by nataliya      #+#    #+#                 */
/*   Updated: 2021/11/09 11:57:35 by ncheban       ########   odam.nl         */
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

 void	ft_in_split(char **res, char const *s, int c, int words)
{
	int		i;
	int		j;
	int		s_len;
	char	*str;

	i = 0;
	s_len = ft_strlen(s);
	while (s_len > 0)
	{
		while (s[s_len] == c)
			--s_len;
		while (s[s_len] != c)
		{
			str[i] == s[s_len];
			++i;
			--s_len;
		}
		j = 0;
		res[words] = malloc((i + 1) * sizeof(char));
		while (i > 0)
		{	
			res[words][j] = str[i];
			++i;
			++j;
		}
		res[words][j] = '\0';
		--words;
		--s_len;
	}
	return (0);
}

char	**ft_split(char const *s, char c)
{
	char	**res;
	int		words;

	if (s == NULL || c == '\0' || c == 0)
		return (NULL);
	words = ft_count_words (s, c);
	res = (char	**)malloc((words + 1) * sizeof(char *));
	if (res == NULL)
		return (NULL);
	res[words] = 0;
	ft_in_split(res, s, c, words);
	return(res);
}