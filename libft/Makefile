# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: ncheban <ncheban@student.codam.nl>           +#+                      #
#                                                    +#+                       #
#    Created: 2021/11/04 16:19:35 by ncheban       #+#    #+#                  #
#    Updated: 2021/11/06 13:28:31 by ncheban       ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME:= libft.a
HEADERFILES:= src/libft.h
CC ?= gcc
OBJFILES:=	obj/ft_atoi.o \
			obj/ft_bzero.o \
			obj/ft_calloc.o \
			obj/ft_isalpha.o \
			obj/ft_isalnum.o \
			obj/ft_isascii.o \
			obj/ft_isdigit.o \
			obj/ft_isprint.o \
			obj/ft_memchr.o \
			obj/ft_memcmp.o \
			obj/ft_memcpy.o \
			obj/ft_memmove.o \
			obj/ft_memset.o \
			obj/ft_strchr.o \
			obj/ft_strdup.o \
			obj/ft_strlcat.o \
			obj/ft_strlcpy.o \
			obj/ft_strlen.o \
			obj/ft_strncmp.o \
			obj/ft_strnstr.o \
			obj/ft_strrchr.o \
			obj/ft_tolower.o \
			obj/ft_toupper.o 
LDFLAGS?=
CFLAGS?= -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJFILES)
	ar rcs $(NAME) $(OBJFILES)

obj/%.o: src/%.c $(HEADERFILES)
	@mkdir -p $(dir $@)
	$(CC) -c $(CFLAGS) -o $@ $<

clean:
	rm -rf $(OBJFILES) obj/

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re test