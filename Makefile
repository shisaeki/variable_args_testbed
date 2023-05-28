# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: shisaeki <shisaeki@student.42tokyo.jp>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/28 10:39:28 by shisaeki          #+#    #+#              #
#    Updated: 2023/05/28 10:41:19 by shisaeki         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME=va_arg_testbed

all: $(NAME)

$(NAME):
	cc -Wall -Wextra -Werror -o $(NAME) main.c
clean:
	rm -f $(NAME)
fclean: clean

re: fclean all
