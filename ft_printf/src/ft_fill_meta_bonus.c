/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_fill_meta_bonus.c                               :+:    :+:            */
/*                                                     +:+                    */
/*   By: nataliya <nataliya@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/01/28 22:13:25 by nataliya      #+#    #+#                 */
/*   Updated: 2022/01/28 22:34:11 by nataliya      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "ft_bonus.h"

static int ft_meta_minus(const char *mod, t_print *metainfo, int ord, int i)
{
	while (mod[i] == '-' && mod[i] != '\0')
	{
		metainfo[ord].minus = 1;
		++i;
	}
	return (i);
}

static int ft_meta_space(const char *mod, t_print *metainfo, int ord, int i)
{
	if (mod[i] == '0')
		metainfo[ord].zero_white = '0';
	while (ft_isdigit(mod[i])!= 0 && mod[i] != '\0')
	{
		metainfo[ord].space = metainfo[ord].space * 10 + (mod[i] - '0');
		++i;
	}
	return (i);
}

static int ft_meta_dot(t_print *metainfo, int ord, int i)
{
	metainfo[ord].dot = 1;
	++i;
	return (i);
}

static int ft_meta_cut(const char *mod, t_print *metainfo, int ord, int i)
{
	while (ft_isdigit(mod[i])!= 0 && mod[i] != '\0')
	{
		metainfo[ord].cut_str = metainfo[ord].cut_str * 10 + (mod[i] - '0');
		++i;
	}
	return (i);
}

int	ft_check_sequence(const char *mod, t_print *metainfo, int ord)
{
	int	i;

	i = 0;
	metainfo[ord].minus = 0;
	metainfo[ord].space = 0;
	metainfo[ord].cut_str = 0;
	if (mod[i] == '-')
		i = ft_meta_minus(mod, metainfo, ord, i);
	if (ft_isdigit(mod[i]) != 0)
		i = ft_meta_space(mod, metainfo, ord, i);
	if (mod[i] == '.')
		i = ft_meta_dot(metainfo, ord, i);	
	if (ft_isdigit(mod[i]) != 0)
		i = ft_meta_cut(mod, metainfo, ord, i);
	if (i != (int)ft_strlen(mod))
		metainfo[ord].space = -1;
	return (metainfo[ord].space);
}