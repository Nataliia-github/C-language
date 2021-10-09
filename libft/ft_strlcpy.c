#include <stddef.h>
#include <stdio.h>

size_t ft_strlcpy(char * restrict dst, const char * restrict src, size_t dstsize)
{
	//копирует из src только то количество символов, которое помещается. Возвращает количество скопированных симоволов
	
/*	strlcpy() copies up to dstsize - 1 characters from the string src to dst, NUL-termi-
	nating the result if dstsize is not 0.*/

/*	const char	*src_1 = src;
	size_t	dstsize_1 = dstsize;

	if (dstsize_1 != 0)
	{
		while(--dstsize_1 != 0)
		{
			if ((*dst++ = *src++) == '\0')
				break;
		}
	}
	if (dstsize_1 == 0)
	{
		if (dstsize != 0)
			*dst = '\0';
		while(*src++)
			;
	}
	return (src - src_1 - 1);
}*/
	const char	*temp_src = src;
	size_t	temp_size = dstsize;

	if (dstsize != 0)
	{
		while (--temp_size != 0)
		{
			if ((*dst++ = *src++) == 0)
				break;
		}
	}
	if (temp_size == 0)
	{
		if (dstsize != 0)
			*dst = '\0';
		while (*src != 0)
			++src;
	}
	return (src - temp_src);
}