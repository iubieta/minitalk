# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: marvin <marvin@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/04/20 18:25:44 by marvin            #+#    #+#              #
#    Updated: 2024/04/20 18:25:44 by marvin           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME_S = server
NAME_C = client
NAME_S_BONUS = server_bonus
NAME_C_BONUS = client_bonus
CC = gcc
CFLAGS = -Wall -Wextra -Werror
INCLUDES = -I./libs/printf
LIBS = -L./libs/printf -lftprintf

SRCS_S = server.c
SRCS_C = client.c
SRCS_S_BONUS = server_bonus.c
SRCS_C_BONUS = client_bonus.c
OBJS_DIR = ./objs
OBJS_S = $(SRCS_S:%.c=$(OBJS_DIR)/%.o)
OBJS_C = $(SRCS_C:%.c=$(OBJS_DIR)/%.o)
OBJS_S_BONUS = $(SRCS_S_BONUS:%.c=$(OBJS_DIR)/%.o)
OBJS_C_BONUS = $(SRCS_C_BONUS:%.c=$(OBJS_DIR)/%.o)

.PHONY: all bonus libs clean fclean re

all: $(NAME_S) $(NAME_C)

$(NAME_S): libs $(OBJS_S) 
	$(CC) $(CFLAGS) $(OBJS_S) -o $(NAME_S) $(LIBS)

$(NAME_C): libs $(OBJS_C) 
	$(CC) $(CFLAGS) $(OBJS_C) -o $(NAME_C) $(LIBS)

$(OBJS_DIR)/%.o: %.c
	@mkdir -p $(OBJS_DIR)
	$(CC) $(CFLAGS) $(INCLUDES) -c $< -o $@

bonus: $(NAME_S_BONUS) $(NAME_C_BONUS)

$(NAME_S_BONUS): libs $(OBJS_S_BONUS) 
	$(CC) $(CFLAGS) $(OBJS_S_BONUS) -o $(NAME_S_BONUS) $(LIBS)

$(NAME_C_BONUS): libs $(OBJS_C_BONUS) 
	$(CC) $(CFLAGS) $(OBJS_C_BONUS) -o $(NAME_C_BONUS) $(LIBS)

$(OBJS_DIR)/%.o: %.c
	@mkdir -p $(OBJS_DIR)
	$(CC) $(CFLAGS) $(INCLUDES) -c $< -o $@

libs:
	$(MAKE) -C ./libs/printf

clean:
	$(MAKE) -C ./libs/printf fclean
	@rm -rf $(OBJS_DIR)

fclean: clean
	@rm -f $(NAME_S) $(NAME_C)
	@rm -f $(NAME_S_BONUS) $(NAME_C_BONUS)

re: fclean all