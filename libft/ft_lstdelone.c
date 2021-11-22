/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_lstdelone.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: nataliya <nataliya@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/11/22 18:06:15 by nataliya      #+#    #+#                 */
/*   Updated: 2021/11/22 18:13:51 by nataliya      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void(*del)(void *))
{
	if (del == NULL)
		return ;
	if (lst != NULL)
	{
		del(lst->content);
		free (lst);
	}
}
