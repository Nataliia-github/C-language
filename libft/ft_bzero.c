void	ft_bzero(char	*s, int	n)
{
	int	i;

	i = 0;
	while (s[i] != '\0' && i < n)
	{
		s[i] = 0;
		++i;
	}
}
