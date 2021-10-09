#include <stddef.h>

void	ft_bzero(void	*s, size_t n)
{
	unsigned long	i;
	char			*s_1;

	s_1 = (char *)s;
	i = 0;
	while (s_1[i] != '\0' && i < n)
	{
		s_1[i] = 0;
		++i;
	}
}
