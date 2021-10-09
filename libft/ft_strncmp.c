#include <stddef.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	char	*s1_1;
	char	*s2_1;
	size_t	i;

	i = 0;
	s1_1 = (char *)s1;
	s2_1 = (char *)s2;
	while (s1_1[i] != '\0' && s2_1[i] != '\0' && i < n && s1_1[i] == s2_1[i])
	{
		++i;
	}
	return (s1_1[i] - s2_1[i]);
}
