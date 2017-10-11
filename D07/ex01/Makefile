# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: amoinier <amoinier@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/10/02 09:41:50 by amoinier          #+#    #+#              #
#    Updated: 2017/10/11 13:52:42 by amoinier         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

FLAG = -Wall -Wextra -Werror

NAME = iter

SRCS = iter.cpp

OBJS = iter.o

all: $(NAME)

$(NAME): $(OBJS)
	clang++ $(FLAG) $(OBJS) -o $(NAME)

%.o: %.cpp
	clang++ $(FLAG) $(SRCS) -c

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

.PHONY: all clean fclean re

re: fclean all
