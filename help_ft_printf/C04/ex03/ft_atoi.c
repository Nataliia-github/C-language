/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_atoi.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: ncheban <marvin@codam.nl>                    +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/08/26 14:43:14 by ncheban       #+#    #+#                 */
/*   Updated: 2021/08/26 14:43:18 by ncheban       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

int	ft_white(char	*str, int	i)
{
	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n'
		|| str[i] == '\v' || str[i] == '\f' || str[i] == '\r')
		++i;
	return (i);
}

int	ft_atoi(char	*str)
{
	int	i;
	int	negative;
	int	num_result;

	i = 0;
	negative = 1;
	num_result = 0;
	while (str[i] != '\0')
	{
		i = ft_white (str, i);
		while (str[i] == '-' || str[i] == '+')
		{
			if (str[i] == '-')
				negative = negative * (-1);
			++i;
		}
		while (str[i] >= '0' && str[i] <= '9')
		{
			num_result = num_result * 10 + ((int)str[i] - '0');
			++i;
		}
		return (num_result * negative);
	}
	return (0);
}
