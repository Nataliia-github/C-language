# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: ncheban <ncheban@student.codam.nl>           +#+                      #
#                                                    +#+                       #
#    Created: 2021/11/14 14:39:48 by ncheban       #+#    #+#                  #
<<<<<<< HEAD
#    Updated: 2022/04/14 13:26:05 by ncheban       ########   odam.nl          #
=======
#    Updated: 2022/04/14 13:33:24 by ncheban       ########   odam.nl          #
>>>>>>> f214191e45585b7a1441a7ae5506bde7f3b3c042
#                                                                              #
# **************************************************************************** #

NAME:= libftprintf.a
HEADERFILES:= 	src/ft_printf.h \
				libft/libft.h

INCLIB_DIR := libft/
INCLIB_NAME := libft.a
CC := gcc
OBJFILES:= 	obj/ft_printf.o \
			obj/ft_fill_result.o \
			obj/ft_putchar_printf.o \
			obj/ft_putstr_printf.o \
			obj/ft_putptr_printf.o \
			obj/ft_putdec_printf.o \
			obj/ft_puthex_printf.o \
			obj/ft_utoa.o \
			obj/ft_putuni_printf.o 


TESTFILE:= src/test_ft_printf.c

CFLAGS:= -Wall -Wextra -Werror

all: $(NAME)
	

$(NAME): $(OBJFILES)
	@make -C $(INCLIB_DIR)
	@cp $(INCLIB_DIR)$(INCLIB_NAME) .
	@mv $(INCLIB_NAME) $(NAME)
	ar rcs $(NAME) $(OBJFILES)

obj/%.o: src/%.c $(HEADERFILES) 
	@mkdir -p $(dir $@)
	$(CC) -c $(CFLAGS) -o $@ $<



clean:
	rm -rf $(OBJFILES) obj/
	make clean -C $(INCLIB_DIR)

fclean: clean
	rm -rf $(NAME)
	make fclean -C $(INCLIB_DIR)

re: fclean all

.PHONY: all clean fclean re
