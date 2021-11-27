/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_tolower.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: ncheban <ncheban@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/11/02 16:06:53 by ncheban       #+#    #+#                 */
/*   Updated: 2021/11/14 13:39:52 by ncheban       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

/* convert char to lowercase. */

int	ft_tolower(int c)
{
	if (c >= 65 && c <= 90)
		return (c + 32);
	return (c);
}
