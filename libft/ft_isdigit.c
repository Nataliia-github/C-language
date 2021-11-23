/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_isdigit.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: ncheban <ncheban@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/11/02 15:37:53 by ncheban       #+#    #+#                 */
/*   Updated: 2021/11/14 12:50:28 by ncheban       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

/* check for a digit (0 through 9). */

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}