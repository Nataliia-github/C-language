/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_utoa.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: ncheban <ncheban@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/12/07 18:12:43 by ncheban       #+#    #+#                 */
/*   Updated: 2021/12/07 18:24:27 by ncheban       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/libft.h"

static	int	ft_count_len(unsigned int n)
{
	int	i;

	i = 0;
	// if (n < 0)
	// {
	// 	n = n * (-1);
	// 	++i;
	// }
	while (n != 0)
	{
		n /= 10;
		++i;
	}
	return (i);
}

static	void	ft_fill_reverse(char *res, unsigned int n)
{
	int	i;

	i = 0;
	while (n > 0)
	{
		res[i] = (n % 10) + '0';
		n = n / 10;
		++i;
	}
	// if (neg == -1)
	// {
	// 	res[i] = '-';
	// 	i = i + 1;
	// }
	res[i] = '\0';
}

static	char	*ft_strrev(char *res)
{
	int		i;
	int		j;
	char	temp;

	i = 0;
	j = ft_strlen(res) - 1;
	while (i < j)
	{	
		temp = res[i];
		res[i] = res[j];
		res[j] = temp;
		--j;
		++i;
	}
	return (res);
}

char	*ft_utoa(unsigned int n)
{
	char	*res;
	int		n_len;

	if (n >= 0 && n <= 4294967295)
	{
		if (n == 0)
			return (ft_strdup("0"));
		n_len = ft_count_len(n);
		res = malloc ((n_len + 1) * sizeof(char));
		if (res == NULL)
			return (NULL);
		ft_fill_reverse(res, n);
		res = ft_strrev(res);
	}
	else
		res = NULL;
	return (res);
}
