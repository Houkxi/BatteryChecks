# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mmanley <mmanley@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/05/14 14:38:10 by mmanley           #+#    #+#              #
#    Updated: 2018/09/01 16:08:56 by mmanley          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libtest

INC = includes/

CFLAGS = -Wall -Wextra -Werror

SAN = -fsanitize=address -g3

LIB = libft.a

OBJ_PATH = objs/

RED = \x1b[31m

GREEN = \x1b[32m

WHITE = \x1b[0m

INCL = testeur.h

SRCS =	ft_mems_tests.c\
		ft_lstch_tests.c\
		ft_nbrs_tests.c\
		ft_print_tests.c\
		ft_put_tests.c\
		ft_srcs_tests.c\
		ft_strs_tests.c\

OBJS = $(SRCS:%.c=%.o)

all : $(LIB) $(NAME)
	@echo > /dev/null

$(NAME) : $(SRCS) $(INCL) main_libft.c
	@gcc -o $(NAME) main_libft.c -I../../libft/includes/ $(SRCS) ~/libft/libft.a
	@echo "${WHITE} ----${GREEN}OVER${WHITE}----"

$(LIB) :
	@make -C ~/libft

debug : $(SRCS) $(INCL)
	@gcc $(SAN) -o deb main_libft.c -I../../libft/includes/ $(SRCS) ~/libft/libft.a
	@echo "${WHITE} ----${GREEN}DEBUG OVER${WHITE}----"

clean :
	@rm -f $(OBJS)

fclean : clean
	@cd ~/libft && $(MAKE) fclean
	@rm -f $(NAME) deb

re : fclean all
