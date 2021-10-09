char	*ft_strchr(const char *s, int c)
{
	char	a;
	char	*ptr;

	a = (char)c;
	ptr = (char *)s;
	if (a == 0)
	{
		*ptr = '\0';
		return (ptr);
	}
	while (*s++ != '\0')
	{
		if (*ptr == a)
			return (ptr);
		ptr++;
	}
	return (0);
}
