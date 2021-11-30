/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_printf.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: ncheban <ncheban@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/11/21 12:00:07 by ncheban       #+#    #+#                 */
/*   Updated: 2021/11/30 18:23:30 by ncheban       ########   odam.nl         */
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

static int	ft_analyze_format(const char \
	*restrict format, char *print_symb, int i)
{
	while (ft_strchr(print_symb, format[i]) == 0)
	{
		if (format[i] == '.')
		{
			tab->point = 1;
			
		}
		if (format[i] == ' ')
			tab->space_fl = 1;
		if (format[i] == '-')
			tab->dash = 1;
	}
}

// static int	ft_if_symbol(const char *restrict format)
// {
// 	int		i;
// 	int		args;
// 	char	*print_symb;

// 	i = 0;
// 	args = 0;
// 	print_symb = "cspdiuxX%";
// 	while (format[i] != '\0')
// 	{
// 		if (format[i] == '%' && ft_strchr(print_symb, format[i + 1]) != 0)
// 			++args;
// 		++i;
// 	}
// 	return (args);
// }

static t_print	*ft_init_tab(t_print *tab)
{
	tab->width = 0;
	tab->point = 0;
	tab->zero = 0;
	tab->neg = 0;
	tab->total_lenght = 0;
	tab->is_zero = 0;
	tab->dash = 0;
	tab->pricision = 0;
	tab->space_fl = 0;
	return (tab);
}

// static int	ft_eval_format(t_print *tab, const char *restrict format, char *print_symb, int i)
// {
// 	while (ft_strchr(print_symb, format[i + 1]) != 0)
// 	{
// 	if (format[i] == '.')
// 		tab->point = 1;
// 	if (format[i] == ' ')
// 		tab->space_fl = 1;
// 	if (format[i] == '-')
// 		tab->dash = 1;
// 	// if (format[i] == 'c')
// 	// 	ft_putchar_fd(format[i], 1);
// 	// if (format[i] == 'd' || format[i] == 'i')
// 	// 	ft_putnbr_fd(format[i], 1);
// 	// if (format[i] == 's')
// 	// 	ft_putstr_fd(format[i], 1);
// 	// if (format[i] == 'p')
// 	// 	ft_putnbr_base(format[i], "0123456789ABCDEF");
// 	++i;
// 	}
// 	return (i);
// }

int	ft_printf(const char *restrict format, ...)
{
	t_print	*tab;
	int		i;
	char	*print_symb;
	
	print_symb = "cspdiuxX%";
	tab = (t_print *)malloc(sizeof(t_print));
	if (tab == NULL)
		return (-1);
	ft_init_tab(tab);
	va_start(tab->args_out, format);
	i = 0;
	// result = 0;
	while (format[i] != '\0')
	{
		if (format[i] == '%')
			// i = ft_eval_format(tab, format, print_symb, i + 1);
			i = ft_analyze_format (format, print_symb, i + 1);
		else
			write(1, &format[i], 1);
		++i;
	}
	va_end(tab->args_out);
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