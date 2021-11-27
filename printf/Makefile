# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: ncheban <ncheban@student.codam.nl>           +#+                      #
#                                                    +#+                       #
#    Created: 2021/11/14 14:39:48 by ncheban       #+#    #+#                  #
#    Updated: 2021/11/27 15:01:09 by ncheban       ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME:= libftprintf.a
HEADERFILES:= 	ft_printf.h

INCLIB_DIR := libft/
INCLIB_NAME := libft.a
CC := gcc
OBJFILES:= obj/ft_printf.o

TESTFILE:= test_ft_printf.c

CFLAGS:= -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJFILES)
	ar rcs $(NAME) $(OBJFILES)
	make bonus -C $(INCLIB_DIR)

obj/%.o: %.c $(HEADERFILES)
	@mkdir -p $(dir $@)
	$(CC) -c $(CFLAGS) -o $@ $<

clean:
	rm -rf $(OBJFILES) obj/
	make clean -C $(INCLIB_DIR)

fclean: clean
	rm -rf $(NAME)
	make fclean -C $(INCLIB_DIR)

re: fclean all

.PHONY: test
test: re
	$(CC) $(CFLAGS) $(TESTFILE) $(NAME) $(INCLIB_DIR)$(INCLIB_NAME)
	./a.out

.PHONY: all clean fclean re