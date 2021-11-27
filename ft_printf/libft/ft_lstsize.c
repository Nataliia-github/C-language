/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_lstsize.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: ncheban <ncheban@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/11/21 21:15:58 by ncheban       #+#    #+#                 */
/*   Updated: 2021/11/23 19:05:16 by ncheban       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

/*	Counts the number of elements in a list. */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int		i;
	t_list	*temp;

	if (lst == NULL)
		return (0);
	i = 0;
	temp = lst;
	while (temp != NULL)
	{
		temp = temp->next;
		++i;
	}	
	return (i);
}
