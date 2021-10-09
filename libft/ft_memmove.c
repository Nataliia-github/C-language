#include <stddef.h>

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	char			*dst_1;
	char			*src_1;
	char			*temp;
	char			temp_str[1000];
	unsigned long	i;

	i = 0;
	dst_1 = (char *)dst;
	src_1 = (char *)src;
	temp = &temp_str[0];
	while (src_1[i] != '\0' && i < n)
	{
		temp[i] = src_1[i];
		++i;
	}
	temp[i] = '\0';
	i = 0;
	while (temp[i] != '\0')
	{
		dst_1[i] = temp[i];
		++i;
	}
	dst_1[i] = '\0';
	return (0);
}
