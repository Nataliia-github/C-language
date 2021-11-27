/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_lstadd_front.c                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: ncheban <ncheban@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/11/21 19:28:39 by ncheban       #+#    #+#                 */
/*   Updated: 2021/11/23 19:04:53 by ncheban       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

/*	Adds the element ’new’ at the beginning of the list. */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (lst == NULL)
	{
		*lst = new;
		return ;
	}
	new->next = *lst;
	*lst = new;
}
