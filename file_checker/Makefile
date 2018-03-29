# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mmanley <mmanley@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/03/29 14:23:54 by mmanley           #+#    #+#              #
#    Updated: 2018/03/29 15:55:02 by mmanley          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = checks

CFLAGS = -Wall -Wextra -Werror

INC = ~/libft/includes

SRCS =	srcs/checker.c\
		srcs/flag_reac.c\
		srcs/options.c\

all : $(NAME)

$(NAME) : $(OBJS)
	gcc $(CFLAGS) -o $@ $(SRCS) -I $(INC) -I ./ ~/libft/libft.a

fclean :
	@rm $(NAME)

re : fclean all
