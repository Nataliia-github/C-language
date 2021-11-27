/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_lstnew.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: ncheban <ncheban@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/11/21 14:35:35 by ncheban       #+#    #+#                 */
/*   Updated: 2021/11/23 19:04:28 by ncheban       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

/* 	Allocates (with malloc()) and returns	*/
/*	a new element (filled with 'content'). 	*/

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*new;

	new = (t_list *)malloc(sizeof(t_list));
	if (new == NULL)
		return (NULL);
	new->content = content;
	new->next = NULL;
	return (new);
}
