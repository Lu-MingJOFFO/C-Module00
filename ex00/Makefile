# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ljoffo <ljoffo@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/05/02 12:51:05 by ljoffo            #+#    #+#              #
#    Updated: 2022/05/02 14:25:58 by ljoffo           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC		= c++

CFLAGS	= -Wall -Werror -Wextra -std=c++98

NAME	= megaphone

SRCS	= megaphone.cpp \

OBJS	= $(SRCS:.cpp=.o)

all:	$(NAME)

$(NAME):$(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $@

%.o:	%.cpp
	$(CC) $(CFLAGS) -c $< -o $@ 

run:	all
	./megaphone

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME)

re:		fclean all

.PHONY: all clean fclean re