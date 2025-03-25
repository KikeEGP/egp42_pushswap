# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: enrgil-p <enrgil-p@student.42madrid>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/01/17 19:24:02 by enrgil-p          #+#    #+#              #
#    Updated: 2025/03/25 18:49:38 by enrgil-p         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap
SOURCES = 	main.c parse.c parse_add_nodes.c parse_conversion_utils.c\
		parse_check_duplicate.c error_clean.c movements_push_swaps.c\
		sort_check.c stack_size.c stack_last.c\
		sort_few.c\

LIBFT_DIR = #where is libft
LIBFT = libft/libft.a
#Should check this with pdel-olm

OBJECTS = $(SOURCES:.c=.o)

CFLAGS = -Wall -Wextra -Werror
CC = cc
RM = rm -f

all: $(NAME)

$(NAME): $(OBJECTS)
	@$(CC) $(CFLAGS) $(SOURCES) $(LIBFT) -o $(NAME)
	$(info CREATED $(NAME))

clean:
	$(RM) $(OBJECTS)
	$(info REMOVED OBJECTS)

compclean: all clean

fclean: clean
	@$(RM) $(NAME)
	$(info REMOVED OBJECTS AND $(NAME))

re: fclean all

.PHONY: all clean fclean re compclean
