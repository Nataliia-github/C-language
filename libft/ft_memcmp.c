#include <stddef.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const char	*s1_1;
	const char	*s2_1;
	size_t		i;

	i = 0;
	s1_1 = (const char *)s1;
	s2_1 = (const char *)s2;
	if (s1_1 == 0 || s2_1 == 0)
		return (0);
	while (s1_1[i] != '\0' && s2_1[i] != '\0' && i < n && s1_1[i] == s2_1[i])
		++i;
	return (s1_1[i] - s2_1[i]);
}
