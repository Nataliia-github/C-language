/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_lstlast.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: nataliya <nataliya@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/11/22 17:22:38 by nataliya      #+#    #+#                 */
/*   Updated: 2021/11/23 19:05:33 by ncheban       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

/* Returns the last element of the list. */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	while (lst != NULL)
	{
		if (lst->next == NULL)
			return (lst);
		lst = lst->next;
	}
	return (lst);
}
