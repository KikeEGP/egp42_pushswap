# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: enrgil-p <enrgil-p@student.42madrid>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/01/17 19:24:02 by enrgil-p          #+#    #+#              #
#    Updated: 2025/05/24 00:10:21 by enrgil-p         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap
SOURCES = 	main.c parse.c parse_add_nodes.c parse_conversion_utils.c\
		parse_check_duplicate.c manage_memory.c\
		movements_push_swaps.c movements_rotates.c\
		sort_check.c stack_size.c\
		sort_few.c sort_utils.c\

LIBFT_DIR = ./libft 
LIBFT = $(LIBFT_DIR)/libft.a

OBJECTS = $(SOURCES:.c=.o)

CFLAGS = -Wall -Wextra -Werror
LIBFT_FLAG = -L $(LIBFT_DIR) -l ft
CC = cc
RM = rm -f

all: $(NAME)

$(NAME): $(LIBFT) $(OBJECTS)
	@$(CC) $(CFLAGS) $(SOURCES) $(LIBFT_FLAG) -o $(NAME)
	$(info CREATED $(NAME))

$(LIBFT):
	@make -C $(LIBFT_DIR) 
	$(info CREATED $(LIBFT))

clean:
	$(RM) $(OBJECTS)
	@make -C $(LIBFT_DIR) clean
	$(info REMOVED OBJECTS AND LIBFT/OBJECTS)

compclean: all clean

fclean: clean
	@$(RM) $(NAME)
	@make -C $(LIBFT_DIR) fclean
	$(info REMOVED OBJECTS AND $(NAME))

re: fclean all

.PHONY: all clean fclean re compclean
