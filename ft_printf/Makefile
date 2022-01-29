# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: ncheban <ncheban@student.codam.nl>           +#+                      #
#                                                    +#+                       #
#    Created: 2021/11/14 14:39:48 by ncheban       #+#    #+#                  #
#    Updated: 2022/01/29 15:15:22 by nataliya      ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME:= libftprintf.a
HEADERFILES:= 	src/ft_printf.h \
				libft/libft.h 

INCLIB_DIR :=	libft/
INCLIB_NAME := libft.a

CC := gcc
OBJFILES:= 	obj/ft_printf.o \
			obj/ft_fill_metainfo.o \
			obj/ft_putchar_printf.o \
			obj/ft_putstr_printf.o \
			obj/ft_putptr_printf.o \
			obj/ft_putdec_printf.o \
			obj/ft_puthex_printf.o \
			obj/ft_utoa.o \
			obj/ft_putuni_printf.o \
			obj/ft_putperc_printf.o


TESTFILE:= src/test_ft_printf.c

CFLAGS:= -Wall -Wextra -Werror

.PHONY: all
all: $(NAME)
	
$(NAME): $(OBJFILES)
	@make -C $(INCLIB_DIR)
	@cp $(INCLIB_DIR)$(INCLIB_NAME) .
	@mv $(INCLIB_NAME) $(NAME)
	ar rcs $(NAME) $(OBJFILES)

obj/%.o: src/%.c $(HEADERFILES) 
	@mkdir -p $(dir $@)
	$(CC) -c $(CFLAGS) -o $@ $<


.PHONY: clean
clean:
	rm -rf $(OBJFILES) obj/
	make clean -C $(INCLIB_DIR)

.PHONY: fclean
fclean: clean
	rm -rf $(NAME)
	make fclean -C $(INCLIB_DIR)

.PHONY: re
re: fclean all

.PHONY: bonus
bonus: all

# $(BONUSLIB_NAME): all

.PHONY: cleanbonus
cleanbonus: clean

.PHONY: fcleanbonus
fcleanbonus: fclean


# .PHONY: leaks
# leaks: CC = .brew/opt/llvm/bin/clang
# leaks: CFLAGS += -mlinker-version=450 -fsanitize=address -g
# leaks: fclean $(NAME)
#          ASAN_OPTIONS=detect_leaks=1 ./$(NAME)

.PHONY: test
test: re
	$(CC) $(CFLAGS) $(TESTFILE) $(NAME) $(INCLIB_DIR)$(INCLIB_NAME)
	./a.out


.PHONY: fcleantest
fcleantest: fclean
	rm a.out
