# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: enrgil-p <enrgil-p@student.42madrid>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/01/17 19:24:02 by enrgil-p          #+#    #+#              #
#    Updated: 2025/02/16 13:40:36 by enrgil-p         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap
SOURCES =
OBJECTS = $(SOURCES: .c=.o)

CFLAGS = -Wall -Wextra -Werror
CC = cc
RM = rm -f

all: $(NAME)

$(NAME): $(OBJECTS)
	$(CC) $(CFLAGS) $(SOURCES)

clean:
	$(NAME) $(OBJECTS)

compclean: all clean

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re compclean
