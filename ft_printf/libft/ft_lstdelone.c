/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_lstdelone.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: nataliya <nataliya@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/11/22 18:06:15 by nataliya      #+#    #+#                 */
/*   Updated: 2021/11/23 19:09:19 by ncheban       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

/*	Takes an element and frees the				*/
/*	 memory of the element’s content using		*/
/*	’del’ and free the element. 				*/
/*	 The memory of ’next’ must not be freed.	*/

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (del == NULL)
		return ;
	if (lst != NULL)
	{
		del(lst->content);
		free (lst);
	}
}
