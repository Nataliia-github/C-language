/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_printf.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: ncheban <ncheban@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/11/21 12:00:07 by ncheban       #+#    #+#                 */
/*   Updated: 2021/12/01 23:52:58 by nataliya      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

/*	1. Create struct												*/
/*	2.	*/
/*	2. Define and initialise structure 								*/
/*	2. Iniciate va_list												*/

#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>
#include "../libft/libft.h"
#include "ft_printf.h"

int	ft_printf(const char *restrict format, ...)
{
	t_print	*result;
	int		i;
	int		j;
	int		ord;
	// int		flag;
	char	*print_symb;
	
	print_symb = "cspdiuxX%";
	result = (t_print *)malloc(sizeof(t_print));
	if (result == NULL)
		return (-1);
	i = 0;
	ord = 0;
	// flag = 0;
	printf("%s\n", format);
	while (format[i] != '\0')
	{
		// if ((flag == 0) && (format[i] == '%')){
		// 	result->start_pos = i;
		// 	result->order = ord + 1;
		// 	flag = 1;
		// }
		// if ((flag == 1) && (format[i] == '%'))
		// {
			
		// }
		// if ((flag == 1) && (format[i] != '%'))
		// {

		// }

		// ++i;
		// // if ((flag == 1) && (format[i] == '%') && (format[i-1] == '%')){
		// // 	// replace with '%'
		// // }

		if (format[i] == '%' && format[i + 1] != '\0')
		{
			result->start_pos = i;
			ord += 1;
			result->order = ord;
			// flag = 1;
			j = 0;
			while ((ft_strchr(print_symb, format[i + j]) != 0) && (format[i] != '\0'))
				++j;
			result->end_pos = i + j;
			result->lenght = result->end_pos - result->start_pos;
			printf("#%d :  %d / %d  lenght = %d\n", result->order, result->start_pos, result->end_pos, result->lenght);
			result->next = result;
		}
		++i;
	}
	printf("\n#%d :  %d  %i\n", result[2].order, result[2].start_pos, result[2].end_pos);
	return (0);
}	