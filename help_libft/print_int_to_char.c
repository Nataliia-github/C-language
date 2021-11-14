int	ft_int_size(int c)
{
	int	size;

	size = 1;
	while (c > 0)
	{
		c %= 10;
		size *= 10;
	}
	return (size);
}

char	*ft_strchr(const char *s, int c)
{
	char	*str;
	int		int_size;

	str = (char *)s;
	int_size = ft_int_size(c);
	if (c == -2147483648)
		return (str = "-2147483648");
	if (c < 0)
	{
		*str = '-';
		c = c * (-1);
	}
//	if (int_size == 1)
//		str = c + '0';
	if (int_size >= 1 && int_size < 11)
	{
		while (int_size > 0)
		{
			*str = (c / int_size) + '0';
			int_size /= 10;
		}
	}
	*str = '\0';
	return (str);
}
