/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   test_linked_list.c                                 :+:    :+:            */
/*                                                     +:+                    */
/*   By: ncheban <ncheban@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/11/21 20:01:02 by ncheban       #+#    #+#                 */
/*   Updated: 2021/11/21 21:01:57 by ncheban       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

typedef struct s_person
{
	char	*name;
	char	*surname;
	struct 	s_person	*next;
}				t_person;

void	ft_print_struct(t_person *head)
{
	t_person	*temp_head;

	temp_head = head;
	while (temp_head != NULL)
	{
		printf ("%s ", (char	*)temp_head->name);
		printf ("%s\n", (char	*)temp_head->surname);
		temp_head = temp_head -> next;
	}
}

int	main(void)
{
	t_person	n1;
	t_person	n2;
	t_person	n3;
	t_person	*head;

	n1.name = "Vasil";
	n2.name = "Ivan";
	n3.name = "Eva";
	n1.surname = "Aheiev";
	n2.surname = "Ivanov";
	n3.surname = "Cheban";
	head = &n2;
	n1.next = &n3;
	n2.next = &n1;
	n3.next = NULL;
	ft_print_struct(head);
}