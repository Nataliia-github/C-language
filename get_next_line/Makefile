# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: ncheban <ncheban@student.codam.nl>           +#+                      #
#                                                    +#+                       #
#    Created: 2022/04/21 15:53:25 by ncheban       #+#    #+#                  #
#    Updated: 2022/04/21 16:13:59 by ncheban       ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME:= get_next_line.a
HEADERFILES:= 	get_next_line.h
				
# INCLIB_DIR := libft/
# INCLIB_NAME := libft.a

CC := gcc
OBJFILES:= 	obj/get_next_file.o 


# TESTFILE:= test_get_next_line.c

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