/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_lstclear.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: ncheban <ncheban@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/11/23 11:57:17 by ncheban       #+#    #+#                 */
/*   Updated: 2021/11/23 19:10:52 by ncheban       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

/*	Deletes and frees the given element.  			*/
/*	The pointer to the list must be set to NULL.	*/

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*temp_lst;
	t_list	*temp_next;

	if (del == NULL || *lst == NULL || lst == NULL)
		return ;
	temp_lst = *lst;
	while (temp_lst != NULL)
	{
		temp_next = temp_lst->next;
		ft_lstdelone(temp_lst, del);
		temp_lst = temp_next;
	}
	*lst = NULL;
}
