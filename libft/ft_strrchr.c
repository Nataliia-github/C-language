/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strrchr.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: ncheban <ncheban@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/11/02 16:06:41 by ncheban       #+#    #+#                 */
/*   Updated: 2021/11/02 16:06:43 by ncheban       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrchr(const char *s, int c)
{
	char	a;
	char	*ptr;
	int		count;

	a = (char)c;
	ptr = (char *)s;
	if (a == 0)
	{
		*ptr = '\0';
		return (ptr);
	}
	count = 0;
	while (*s++ != '\0')
		++count;
	while (--count > 0)
	{
		if (ptr[count] == a)
			return (&ptr[count]);
	}
	return (0);
}
