void	ft_memset(char	*str, char	c, int	n)
{
	int	i;

	i = 0;
	while (str[i] != '\0' && i < n)
	{
		str[i] = c;
		++i;
	}
}
