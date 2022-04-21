/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   get_next_line.h                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: ncheban <ncheban@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/04/21 15:48:37 by ncheban       #+#    #+#                 */
/*   Updated: 2022/04/21 17:59:11 by ncheban       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 1
# endif

# include <unistd.h>
# include <fcntl.h>
// # include <stdlib.h>

// # ifndef OPEN_MAX
// #  define OPEN_MAX 32
// # endif

char	*get_next_line(int fd);
char	*ft_strchr(char	*s, int c);
char	*ft_strjoin(char const *s1, char const *s2);

#endif