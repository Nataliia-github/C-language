/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_printf.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: ncheban <ncheban@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/11/21 12:00:07 by ncheban       #+#    #+#                 */
/*   Updated: 2021/12/02 22:42:22 by nataliya      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>
#include "../libft/libft.h"
#include "ft_printf.h"

static int	ft_count_args(va_list arg_copy)
{
	int		i;
	char	*temp;

	i = 0;
	temp = va_arg(arg_copy, char *);
	// ft_memcpy(result[i].mod_arg, temp, sizeof(temp));
	while (temp != NULL)
	{
		temp = va_arg(arg_copy, char *);
		++i;
		// ft_memcpy(result[i].mod_arg, temp, sizeof(temp));
	}
	return (i);
}

static int	ft_fill_result(const char *restrict format, t_print *result)
{
	char	*print_symb;
	char	*print_form;
	int		ord;
	int		i;
	// int		j;
	int		flag;

	ord = 0;
	i = 0;
	flag = 0;
	print_symb = "cspdiuxX%";
	print_form = "0.-";
	while (format[i] != '\0')
	{		
		if (format[i] == '%' && flag == 0)
		{
			result[ord].start_pos = i;
			result[ord].order = ord;
			flag = 1;
		}
		else if (format[i] =='%' && flag == 1)
		{
			result[ord].end_pos = i;
			result[ord].lenght = result[ord].end_pos - result[ord].start_pos + 1;
			ord++;
			flag = 0;
		}
		else if (format[i] != '%' && flag == 1)
		{
			if (ft_strchr(print_symb, format[i]) != 0)
			{
				result[ord].end_pos = i;
				result[ord].lenght = result[ord].end_pos - result[ord].start_pos + 1;
				ord++;
				flag = 0;
			}
			else if ((ft_strchr(print_form, format[i]) == 0))
			{
				flag = 0;
				return (-1);
			}
		}
		++i;
	}
	return (ord);
}


// static int	ft_fill_result(const char *restrict format, t_print *result)
// {
// 	char	*print_symb;
// 	int		ord;
// 	int		i;
// 	int		j;

// 	ord = 0;
// 	i = 0;
// 	i = 0;
// 	print_symb = "cspdiuxX%";
// 	while (format[i] != '\0')
// 	{		
// 		if (format[i] == '%' && (ft_strchr(print_symb, format[i + 1]) != 0) \
// 			&& format[i - 1] != '%')
// 		{
// 			result[ord].start_pos = i;
// 			result[ord].order = ord;
// 			j = 0;
// 			while ((ft_strchr(print_symb, format[i + j]) != 0) \
// 				&& (format[i + j] != '\0'))
// 				++j;
// 			result[ord].end_pos = i + j;
// 			result[ord].lenght = result[ord].end_pos - result[ord].start_pos;
// 			result[ord].arg = ft_substr(format, i, result[ord].lenght);
// 			++ord;
// 		}
// 		++i;
// 	}
// 	return (ord);
// }

// static void	ft_print_kind_str(t_print *result,int args,int ord)
// {
// 	int	i;

// 	i = 0;
// 	if (args >= ord)
// 	{
// 		while (i < ord)
// 		{
// 			if (result[i].arg[result[i].lenght - 1] == 'c')
// 				printf("#%i : Char\n", i);
// 			if (result[i].arg[result[i].lenght - 1] == 's')
// 				printf("#%i : String\n", i);
// 			if (result[i].arg[result[i].lenght - 1] == 'p')
// 				printf("#%i : void * Hexadecimal\n", i);
// 			if (result[i].arg[result[i].lenght - 1] == 'd')
// 				printf("#%i : Decimal\n", i);
// 			if (result[i].arg[result[i].lenght - 1] == 'i')
// 				printf("#%i : Integer\n", i);
// 			if (result[i].arg[result[i].lenght - 1] == 'u')
// 				printf("#%i : Unsigned Decimal\n", i);
// 			if (result[i].arg[result[i].lenght - 1] == 'x')
// 				printf("#%i : Hexadecimal\n", i);
// 			if (result[i].arg[result[i].lenght - 1] == 'X')
// 				printf("#%i : HEXADECIMAL\n", i);
// 			if (result[i].arg[result[i].lenght - 1] == '%')
// 				printf("#%i : Percent\n", i);
// 		++i;
// 		}
// 	}
// }

int	ft_printf(const char *restrict format, ...)
{
	t_print	*result;
	int		i;
	int		ord;
	int		args;
	va_list	arg_ptr;
	va_list	arg_copy;

	result = (t_print *)malloc(sizeof(t_print));
	if (result == NULL)
		return (-1);
	i = 0;
	printf("\n'%s' - lenght = %zu\n", format, ft_strlen(format));
	ord = ft_fill_result(format, result);
	printf("ord = %d\n", ord);
	args = 0;
	va_start(arg_ptr, format);
	va_copy(arg_copy, arg_ptr);
	printf("args = %d\n", args);
	args = ft_count_args(arg_copy);
	va_end(arg_copy);
	va_end(arg_ptr);
	printf("args = %i\n", args);
	// ft_print_kind_str(result, args, ord);
	i = 0;
	while (i < ord)
	{
		printf("#%d   %d : %i     lenght = %i\n", result[i].order, result[i].start_pos, result[i].end_pos, result[i].lenght);
		// printf("'%s'\n", result[i].mod_arg);
		++i;
	}
	// free (result);
	return (0);
}
