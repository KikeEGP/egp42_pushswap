# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: enrgil-p <enrgil-p@student.42madrid>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/01/17 19:24:02 by enrgil-p          #+#    #+#              #
#    Updated: 2025/06/01 19:39:25 by enrgil-p         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap
SOURCES = 	main.c parse.c parse_add_nodes.c parse_conversion_utils.c\
		parse_check_duplicate.c manage_memory.c\
		movements_push_swaps.c movements_rotates.c\
		sort_check.c stack_size.c\
		sort_few.c sort_few_utils.c\
		sort_large_input.c sort_large_utils.c\
		sort_large_comparison_utils.c rotation_conditions.c\

LIBFT_DIR = ./libft 
LIBFT = $(LIBFT_DIR)/libft.a

OBJECTS = $(SOURCES:.c=.o)

CFLAGS = -Wall -Wextra -Werror -g
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
