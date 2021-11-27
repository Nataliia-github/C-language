/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_itoa.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: ncheban <ncheban@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/11/11 10:39:42 by ncheban       #+#    #+#                 */
/*   Updated: 2021/11/19 16:15:07 by ncheban       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

/* converts a number into a string. */

#include "libft.h"
#include <stdio.h>

static	int	ft_count_len(int n)
{
	int	i;

	i = 0;
	if (n < 0)
	{
		n = n * (-1);
		++i;
	}
	while (n != 0)
	{
		n /= 10;
		++i;
	}
	return (i);
}

static	void	ft_fill_reverse(char *res, int n, int neg)
{
	int	i;

	i = 0;
	while (n > 0)
	{
		res[i] = (n % 10) + '0';
		n = n / 10;
		++i;
	}
	if (neg == -1)
	{
		res[i] = '-';
		i = i + 1;
	}
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

char	*ft_itoa(int n)
{
	char	*res;
	int		n_len;
	char	neg;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	if (n == 0)
		return (ft_strdup("0"));
	n_len = ft_count_len(n);
	res = malloc ((n_len + 1) * sizeof(char));
	if (res == NULL)
		return (NULL);
	neg = 1;
	if (n < 0)
	{
		neg *= -1;
		n *= -1;
	}
	if (n > 0)
		ft_fill_reverse(res, n, neg);
	res = ft_strrev(res);
	return (res);
}
