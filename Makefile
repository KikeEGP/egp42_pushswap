# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: enrgil-p <enrgil-p@student.42madrid>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/01/17 19:24:02 by enrgil-p          #+#    #+#              #
#    Updated: 2025/03/02 00:29:26 by enrgil-p         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap
SOURCES = main.c parse.c parse_chars.c error_parse.c\
          parse_add_nodes.c parse_conv_add.c\

LIBFT_DIR = #where is libft
LIBFT = #libft.a
#Should check this with pdel-olm

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
