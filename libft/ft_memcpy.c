void	*ft_memcpy(char	*dst, char	*src, int n)
{
	int	i;

	i = 0;
	while ((src[i] + 1) != '\0' && i < n)
	{
		dst[i] = src[i];
		++i;
	}
	return (0);
}
