/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_toupper.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: ncheban <ncheban@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/11/02 16:07:03 by ncheban       #+#    #+#                 */
/*   Updated: 2021/11/14 13:40:04 by ncheban       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

/* convert char to uppercase. */

int	ft_toupper(int c)
{
	if (c >= 97 && c <= 122)
		return (c - 32);
	return (c);
}
