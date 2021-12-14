# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: ncheban <ncheban@student.codam.nl>           +#+                      #
#                                                    +#+                       #
#    Created: 2021/11/04 16:19:35 by ncheban       #+#    #+#                  #
#    Updated: 2021/12/14 20:45:50 by ncheban       ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME:= libft.a
HEADERFILES:= libft.h
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
			obj/ft_toupper.o \
			obj/ft_substr.o \
			obj/ft_strjoin.o \
			obj/ft_strtrim.o \
			obj/ft_split.o \
			obj/ft_itoa.o \
			obj/ft_strmapi.o \
			obj/ft_striteri.o \
			obj/ft_putchar_fd.o \
			obj/ft_putstr_fd.o \
			obj/ft_putendl_fd.o \
			obj/ft_putnbr_fd.o
			
BONUS_OBJFILES :=	obj/ft_lstnew.o \
					obj/ft_lstadd_front.o \
					obj/ft_lstsize.o \
					obj/ft_lstlast.o \
					obj/ft_lstadd_back.o \
					obj/ft_lstdelone.o \
					obj/ft_lstclear.o \
					obj/ft_lstiter.o \
					obj/ft_lstmap.o \
					obj/ft_putnbr_printf.o

CFLAGS?= -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJFILES)
	ar rcs $(NAME) $(OBJFILES)

obj/%.o: %.c $(HEADERFILES)
	@mkdir -p $(dir $@)
	$(CC) -c $(CFLAGS) -o $@ $<

clean:
	rm -rf $(OBJFILES) $(BONUS_OBJFILES) obj/

fclean: clean
	rm -rf $(NAME)

.PHONY: bonus
bonus: $(OBJFILES) $(BONUS_OBJFILES)
	ar rcs $(NAME) $(OBJFILES) $(BONUS_OBJFILES)

re: fclean all

.PHONY: all clean fclean re test