/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_isascii.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: ncheban <ncheban@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/11/02 15:37:39 by ncheban       #+#    #+#                 */
/*   Updated: 2021/11/14 12:49:38 by ncheban       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

/* checks whether c fits into the ASCII character set. */

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	return (0);
}
