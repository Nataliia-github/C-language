#include <stddef.h>
#include <stdio.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	char	*s_1;
	char	c_1;
	size_t	i;

	c_1 = (char)c;
	s_1 = (char *)s;
	i = 0;
	while (s_1[i] != '\0' && i < n)
	{
		if (s_1[i] == c_1)
			return (&s_1[i]);
		++i;
	}
	return (0);
}
