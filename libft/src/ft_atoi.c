/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_atoi.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: ncheban <marvin@codam.nl>                    +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/11/02 15:28:14 by ncheban       #+#    #+#                 */
/*   Updated: 2021/11/02 15:28:14 by ncheban       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

int	ft_skip_white(const char *str, int i)
{
	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\r'
		|| str[i] == '\n' || str[i] == '\f' || str[i] == '\v')
		++i;
	return (i);
}

int	ft_atoi(const char *str)
{
	int	i;
	int	j;
	int	neg;
	int	num;

	i = 0;
	neg = 1;
	num = 0;
	j = 0;
	i = ft_skip_white(str, i);
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			neg *= -1;
		++i;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		num = num * 10 + (str[i] - '0');
		if (j > 10 && neg == 1)
			return (-1);
		else if (j > 11 && neg == -1)
			return (0);
		++i;
		++j;
	}
	return (num * neg);
}
