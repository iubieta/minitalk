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
CC = gcc
CFLAGS = -Wall -Wextra -Werror
INCLUDES = -I./libs/printf
LIBS = -L./libs/printf -lftprintf

SRCS_S = server.c
SRCS_C = client.c
OBJS_DIR = ./objs
OBJS_S = $(SRCS_S:%.c=$(OBJS_DIR)/%.o)
OBJS_C = $(SRCS_C:%.c=$(OBJS_DIR)/%.o)

.PHONY: all libs clean fclean re

all: $(NAME_S) $(NAME_C)

$(NAME_S): libs $(OBJS_S) 
	$(CC) $(CFLAGS) $(OBJS_S) -o $(NAME_S) $(LIBS)

$(NAME_C): libs $(OBJS_C) 
	$(CC) $(CFLAGS) $(OBJS_C) -o $(NAME_C) $(LIBS)

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

re: fclean all