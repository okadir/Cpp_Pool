# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: haitkadi <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/18 19:11:50 by haitkadi          #+#    #+#              #
#    Updated: 2022/10/18 19:11:52 by haitkadi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

.PHONY: all clean fclean re
CC = g++
CFLAGS = -Wall -Wextra -Werror
CPP_VERSION = -std=c++98
NAME = megaphone


SRCS = megaphone.cpp
OBJS = $(SRCS:%.cpp=%.o)

NAME: $(OBJS)
	@$(CC) $(CFLAGS) $(CPP_VERSION) $(OBJS) -o $(NAME)
	@echo "Compiled"

all: $(NAME)


%.o:%.c $(SRCS)
	@$(CC) $(CFLAGS) $(CPP_VERSION) -o $@ -c $<

clean:
	@rm -f $(OBJS)

fclean: clean
	@rm -f $(NAME)
	clear

re: fclean all
