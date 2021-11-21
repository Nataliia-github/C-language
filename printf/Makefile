# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: ncheban <ncheban@student.codam.nl>           +#+                      #
#                                                    +#+                       #
#    Created: 2021/11/14 14:39:48 by ncheban       #+#    #+#                  #
#    Updated: 2021/11/21 11:59:48 by ncheban       ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME:= libftprintf.a
HEADERFILES:= src/libftprintf.h
INCLIB := libft
CC ?= gcc
OBJFILES:= ft_printf.o
			
CFLAGS?= -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJFILES)
	ar rcs $(NAME) $(OBJFILES)
#	make -C $(INCLIB)

obj/%.o: src/%.c $(HEADERFILES)
	@mkdir -p $(dir $@)
	$(CC) -c $(CFLAGS) -o $@ $<

clean:
	rm -rf $(OBJFILES) obj/

fclean: clean
	rm -rf $(NAME)
	

re: fclean all

.PHONY: all clean fclean re test