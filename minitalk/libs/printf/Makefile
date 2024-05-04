# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: marvin <marvin@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/30 19:10:42 by iubieta-          #+#    #+#              #
#    Updated: 2024/05/04 12:57:28 by marvin           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
SRCS = ft_printf.c put_fts.c
OBJS = ${SRCS:.c=.o}
CC = gcc
CFLAGS = -Wall -Werror -Wextra
AR = ar csr
RM = rm -rf

all : message ${NAME}

message:
	@echo ""

${NAME} : ${OBJS}
	${AR} ${NAME} ${OBJS}
	@echo "PRINTF COMPILED\n"
	
clean :
	@${RM} ${OBJS}

fclean : message clean
	@${RM} ${NAME}

re : fclean all

.PHONY: all clean fclean re