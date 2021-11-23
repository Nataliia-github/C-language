/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_lstadd_back.c                                   :+:    :+:            */
/*                                                     +:+                    */
/*   By: nataliya <nataliya@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/11/22 17:39:17 by nataliya      #+#    #+#                 */
/*   Updated: 2021/11/23 19:05:47 by ncheban       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

/*	Adds the element ’new’ at the end of the list. */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	if (*lst != NULL)
		ft_lstlast(*lst)->next = new;
	else
		*lst = new;
}
