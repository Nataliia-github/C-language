# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: ncheban <ncheban@student.codam.nl>           +#+                      #
#                                                    +#+                       #
#    Created: 2021/11/14 14:39:48 by ncheban       #+#    #+#                  #
#    Updated: 2022/01/28 22:45:52 by nataliya      ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME:= libftprintf.a
HEADERFILES:= 	src/ft_printf.h \
				libft/libft.h \
				src/ft_bonus.h

INCLIB_DIR :=	libft/
INCLIB_NAME := libft.a

# BONUSLIB_DIR :=	src/
BONUSLIB_NAME := ft_bonus.a

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

BONUS_OBJF:=	obj/ft_bonus.o \
				obj/ft_fill_meta_bonus.o \
				obj/ft_putchar_bonus.o \
				obj/ft_putstr_bonus.o \

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

.PHONY: bonus
bonus: $(BONUS_OBJF)
	# @make -C $(BONUSLIB_DIR)
	ar rcs $(BONUSLIB_NAME) $(BONUS_OBJF)


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

.PHONY: rebonus
rebonus: fclean all bonus
	rm -rf $(BONUSLIB_NAME)

.PHONY: fclean
fclean: clean
	rm -rf $(NAME)
	make fclean -C $(INCLIB_DIR)

# .PHONY: leaks
# leaks: CC = .brew/opt/llvm/bin/clang
# leaks: CFLAGS += -mlinker-version=450 -fsanitize=address -g
# leaks: fclean $(NAME)
#          ASAN_OPTIONS=detect_leaks=1 ./$(NAME)

.PHONY: test
test: re
	$(CC) $(CFLAGS) $(TESTFILE) $(NAME) $(INCLIB_DIR)$(INCLIB_NAME)
	./a.out

.PHONY: testbonus
testbonus: re rebonus
	$(CC) $(CFLAGS) $(TESTFILE) $(NAME) $(INCLIB_DIR)$(INCLIB_NAME) $(BONUSLIB_NAME)
	./a.out

.PHONY: fcleantest
fcleantest: fclean
	rm a.out