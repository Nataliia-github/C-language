/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_lstiter.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: ncheban <ncheban@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/11/23 14:44:39 by ncheban       #+#    #+#                 */
/*   Updated: 2021/11/23 19:11:59 by ncheban       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

/*	 Applies the function âfâ to the content of each element of 'lst'. 	*/

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (lst == NULL || f == NULL)
		return ;
	while (lst != NULL)
	{
		f(lst->content);
		lst = lst->next;
	}
}
