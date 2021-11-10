/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_split.c                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: nataliya <nataliya@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/11/08 17:47:27 by nataliya      #+#    #+#                 */
/*   Updated: 2021/11/10 19:26:21 by nataliya      ########   odam.nl         */
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
		if ((s[i + 1] == c || s[i + 1] == '\0') && s[i] != c)
			++words;
		++i;
	}
	return (words);
}


// int	ft_free_mem(char **res, int words)
// {
// 	while (words > 0)
// 	{
// 		free(res[words]);
// 		--words;
// 	}
// 	return (-1);
// }

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
		
		// if (res[words] == NULL)
		// 	return (ft_free_mem(res, words));
	//	free(res[words]);
		i = i + letters;
		++words;
	}
	return (0);
}

char	**ft_split(char const *s, char c)
{
	char	**res;
	int		words;
	int i;

	if (s == NULL)
		return (NULL);
	i = 0;
	words = ft_count_words (s, c);
	res = (char **)malloc((words + 1) * sizeof(char *));
	if (res == NULL)
		return (NULL);
	res[words] = 0;
	ft_split_it(res, s, c);
//	printf("Word1 = '%s', word2 = '%s', word3 = '%s', word4 = '%s', word5 = '%s'\n", res[0], res[1], res[2], res[3], res[4]);
//	free(res);
	return (res);
}

// int main(void)
// {
// 	char	c = '|';
// 	char	str[] = "split  ||this|for|me|||||!|";
// 	int		words;
// 	char	**res;

// 	printf("String = '%s', char = '%c'\n", str, c);
	
// 	words = ft_count_words(str, c);
// 	printf("words = %d\n", words);

// 	res = (char	**)malloc((words + 1)*sizeof(char));
// 	res[words] = "\0";
// 	if (res == NULL)
// 		return (0);
// 	ft_split_it(res, str, c);
// 	printf("Word1 = '%s', word2 = '%s', word3 = '%s', word4 = '%s', word5 = '%s'\n", res[0], res[1], res[2], res[3], res[4]);
// 	return (0);
// }