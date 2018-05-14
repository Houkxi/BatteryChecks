# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mmanley <mmanley@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/05/14 14:38:10 by mmanley           #+#    #+#              #
#    Updated: 2018/05/14 15:59:50 by mmanley          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libtest

INC = includes/

LIB = libft.a

OBJ_PATH = objs/

RED = \x1b[31m

GREEN = \x1b[32m

WHITE = \x1b[0m

SRCS =	ft_mems_tests.c\
		ft_lstch_tests.c\
		ft_nbrs_tests.c\
		ft_print_tests.c\
		ft_put_tests.c\
		ft_srcs_tests.c\
		ft_strs_tests.c\
		main_libft.c

OBJS = $(SRCS:%.c=%.o)

all : $(LIB) $(NAME)

$(NAME) : $(OBJS)
	@gcc -o $(NAME) $(OBJS) ~/libft/libft.a -I ~/libft/includes/
	@echo "${WHITE} ----${GREEN}OVER${WHITE}----"

$(LIB) :
	@make -C ~/libft

%.o: %.c
	@gcc -o $@ -c $< -I ~/libft/includes/

clean :
	@rm $(OBJS)

fclean : clean
	@cd ~/libft && $(MAKE) fclean
	@rm $(NAME)

re : fclean all
