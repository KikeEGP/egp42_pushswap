# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: enrgil-p <enrgil-p@student.42madrid>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/01/17 19:24:02 by enrgil-p          #+#    #+#              #
#    Updated: 2025/04/21 19:02:47 by enrgil-p         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap
SOURCES = 	main.c parse.c parse_add_nodes.c parse_conversion_utils.c\
		parse_check_duplicate.c error_clean.c\
		movements_push_swaps.c\
		sort_check.c stack_size.c stack_last.c\
		sort_few.c\

LIBFT_DIR = ./libft 
LIBFT = libft/libft.a
#Should check this with pdel-olm

OBJECTS = $(SOURCES:.c=.o)

CFLAGS = -Wall -Wextra -Werror
CC = cc
RM = rm -f

all: $(NAME)

$(NAME): $(OBJECTS)
	@make -C $(LIBFT_DIR) 
	$(info CREATED $(LIBFT))
	@$(CC) $(CFLAGS) $(SOURCES) $(LIBFT) -o $(NAME)
	$(info CREATED $(NAME))

clean:
	$(RM) $(OBJECTS)
	@make -C $(LIBFT_DIR) clean
	$(info REMOVED OBJECTS AND LIBFT/OBJECTS)

compclean: all clean
	@make compclean -C $(LIBFT_DIR)

fclean: clean
	@$(RM) $(NAME)
	@make -C $(LIBFT_DIR) -fclean
	$(info REMOVED OBJECTS AND $(NAME))

re: fclean all

.PHONY: all clean fclean re compclean
