#include <stddef.h>
void	ft_concat(char *dst, const char *src, size_t temp_size)
{
	while (*src != '\0')
	{
		if (temp_size != 0)
		{
			*dst++ = *src;
			--temp_size;
		}
		++src;
	}
	*dst = '\0';
}

size_t	ft_strlcat(char *restrict dst, const char *restrict src, size_t dstsize)
{
	size_t		dst_len;
	size_t		src_len;
	size_t		temp_size;
	char		*temp_dst;
	const char	*temp_src = src;

	temp_size = dstsize;
	temp_dst = dst;
	while (--temp_size != 0 && *dst != '\0')
		++dst;
	dst_len = dst - temp_dst;
	temp_size = dstsize - dst_len;
	if ((temp_size - 1) == 0)
	{
		src_len = 0;
		while (*src++)
			++src_len;
		return (dst_len + src_len);
	}
	ft_concat(dst, src, temp_size);
	return (dst_len - (src - temp_src));
}
