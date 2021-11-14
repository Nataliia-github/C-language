#include "libft.h"
#include <stdio.h>

int ft_count_words(char *str,char c)
{
	int i;
	int	words;

	i = 0;
	words = 0;
	while (str[i] != '\0')
	{
		if (str[i] != c && (str[i + 1] == c || str[i + 1] == '\0'))
			++words;
		++i;
	}
	return (words);
}

// void	ft_write_world(char *dst, const char *src, char c)
// {
// 	int	i;

// 	i = 0;
// 	while (src[i] != c || src[i] != '\0')
// 	{
// 		dst[i] = src[i];
// 		++i;
// 	}
// 	dst[i] = '\0';
// }

void	ft_split_it(char **res, const char *str, char c)
{
	int i;
	int	letters;
	int	words;

	i = 0;
	words = 0;
	letters = 0;
	while (str[i] != '\0')
	{
		while (str[i] == c && str[i] != '\0')
		 	++i;
		while (str[i + letters] != c && str[i+ letters] != '\0')
			++letters;
		res[words] = (char *)malloc((letters + 1) * sizeof(char));
		res[words] = ft_substr(str, i, letters);
	//	ft_write_world(res[words], (str + i), c);
		// res[words][letters] = '\0';
		++words;
		i = i + letters;
	}
}

int main(void)
{
	char	c = '/';
	char	str[] = "////Hello///World///";
	int		words;
	char	**res;

	printf("String = '%s', char = '%c'\n", str, c);
	
	words = ft_count_words(str, c);
	printf("words = %d\n", words);

	res = (char	**)malloc((words + 1)*sizeof(char));
	res[words] = 0;
	if (res == NULL)
		return (0);
	ft_split_it(res, str, c);
	// printf("Word1 = %s, word2 = %s\n", res[0], res[1]);
	return (0);
}