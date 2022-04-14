/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_isprint.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: ncheban <ncheban@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/11/02 15:38:02 by ncheban       #+#    #+#                 */
/*   Updated: 2021/11/14 12:50:51 by ncheban       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

/* checks for any printable character. */

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	return (0);
}
