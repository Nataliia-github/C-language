/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_split.c                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: nataliya <nataliya@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/11/08 17:47:27 by nataliya      #+#    #+#                 */
/*   Updated: 2021/11/09 16:34:36 by ncheban       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_count_words(char const *s, char c)
{
	int	words;
	int	i;

	words = 0;
	i = 0;
	while (s[i] != '\0')
	{
		if ((s[i + 1] == c || s[i + 1] == '\0') && (s[i] != c || s[i] != '\0'))
			++words;
		++i;
	}
	return (words);
}

void	ft_write_word(char	*dst, const char *src, char c)
{
	int	i;

	i = 0;
	while (src[i] != c || src[i] != '\0')
	{
		dst[i] = src[i];
		++i;
	}
	dst[i] = '\0';
}

int	ft_free_mem(char **res, int res_len)
{
	while (res_len > 0)
	{
		free(res[res_len]);
		--res_len;
	}
	return (-1);
}

 int	ft_in_split(char **res, char const *s, char c)
{
	int		i;
	int		j;
	int		words;

	i = 0;
	words = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
			++i;
		if (s[i] != c)
		{
			j = 0;
			while (s[i + j] != c || s[i + j] != '\0')
				++j;
			res[words] = (char *)malloc((j + 1) * sizeof(char));
			if (res[words] != NULL)
				return (ft_free_mem(res, words - 1));
			ft_write_word(res[words], (s + i), c);
			i = i + j;
			++words;
		}
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
	res = (char **)malloc((words + 1) * sizeof(char *));
	if (res == NULL)
		return (NULL);
	res[words] = "\0";
	ft_in_split(res, s, c);
	return (res);
}
