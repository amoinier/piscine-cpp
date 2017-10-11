# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: amoinier <amoinier@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/10/02 09:41:50 by amoinier          #+#    #+#              #
#    Updated: 2017/10/11 17:55:04 by amoinier         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

FLAG = -g -Wall -Wextra -Werror -Wno-unused

NAME = identify

SRCS = main.cpp \
		Base.cpp \
		A.cpp \
		B.cpp \
		C.cpp \

OBJS = main.o \
		Base.o \
		A.o \
		B.o \
		C.o \

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
