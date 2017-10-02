# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: amoinier <amoinier@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/10/02 09:41:50 by amoinier          #+#    #+#              #
#    Updated: 2017/10/02 10:23:37 by amoinier         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

FLAG =		-Wall -Wextra -Werror

NAME =		megaphone

SRCS =		megaphone.cpp


OBJS =		$(SRCS:.cpp=.o)

all: main

main: $(OBJS)
	clang++ $(FLAG) $(OBJS) -o $(NAME)

%.o: %.cpp
	clang++ $(FLAG) megaphone.cpp -c

clean:
	rm -f megaphone.o

fclean: clean
	rm -f $(NAME)

.PHONY: all $(NAME) ofile clean fclean re

re: fclean all
