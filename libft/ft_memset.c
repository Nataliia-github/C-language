#include <stddef.h>

void	*ft_memset(void	*str, int c, size_t len)
{
	unsigned long	i;
	char			*str_1;

	i = 0;
	str_1 = (char *)str;
	while (str_1[i] != '\0' && i < len)
	{
		str_1[i] = c;
		++i;
	}
	return (0);
}
