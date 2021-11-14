/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_isalpha.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: ncheban <ncheban@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/11/02 15:37:29 by ncheban       #+#    #+#                 */
/*   Updated: 2021/11/14 12:49:23 by ncheban       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

/* checks for an alphabetic character. */

int	ft_isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (1);
	return (0);
}
