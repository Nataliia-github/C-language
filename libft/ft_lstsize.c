/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_lstsize.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: ncheban <ncheban@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/11/21 21:15:58 by ncheban       #+#    #+#                 */
/*   Updated: 2021/11/21 21:23:49 by ncheban       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

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