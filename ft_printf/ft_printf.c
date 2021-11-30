/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_printf.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: ncheban <ncheban@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/11/21 12:00:07 by ncheban       #+#    #+#                 */
/*   Updated: 2021/11/30 13:17:28 by ncheban       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

/*	1. Count how many special symbols in the input string = args	*/
/*	2. Iniciate va_list												*/
/*	2. Copy va_list												*/

#include <stdio.h>
#include <stdarg.h>
#include "../libft/libft.h"

static int	ft_if_symbol(const char *restrict input_str)
{
	int		i;
	int		args;
	char	*print_symb;

	i = 0;
	args = 0;
	print_symb = "cspdiuxX%";
	while (input_str[i] != '\0')
	{
		if (input_str[i] == '%' && ft_strchr(print_symb, input_str[i + 1]) != 0)
			++args;
		++i;
	}
	return (args);
}

int	ft_printf(const char *restrict input_str, ...)
{
	va_list	arg_ptr;
	va_list	args_copy;
	char	*print_elem;
	int		args;
	int		i;

	args = ft_if_symbol(input_str);
	va_start(arg_ptr, input_str);
	va_copy(args_copy, arg_ptr);
	i = 0;
	while(i < args)
	{
		print_elem = va_arg(args_copy, char *);
		printf("#%d: %s\n", i + 1 , print_elem);
		++i;
	}
	printf ("%d\n", args);
	va_end(arg_ptr);
	return (0);
}

// #include <stdio.h>
// #include <stdarg.h>
 
// int vout(int max, ...)
// {
//    va_list arg_ptr;
//    va_list args_copy;
//    int args;
//    char *day;
//    va_start(arg_ptr, max);
//    va_copy(args_copy, arg_ptr);
//    args = 0;
//    while(args < max)
//    {
//       day = va_arg(arg_ptr, char *);
//       printf("Day: %s\n", day);
//       args++;
//    }
//    va_end(arg_ptr);

//    args = 0;
//    while(args < max)
//    {
//       day = va_arg(args_copy, char *);
//       printf("Day: %s\n", day);
//       args++;
//    }
//    va_end(args_copy);
//    return (0);
// }

// int main(void)
// {
// 	vout(2, "Sat", "Sun");
// 	printf("\n");
//    vout(3, "Mon", "Tues", "Wed");
// 	return (0);
// }