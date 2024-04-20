# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: iubieta- <iubieta-@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/30 19:10:42 by iubieta-          #+#    #+#              #
#    Updated: 2023/11/02 15:39:48 by iubieta-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
SRCS = ft_printf.c put_fts.c
OBJS = ${SRCS:.c=.o}
CC = gcc
CFLAGS = -Wall -Werror -Wextra
AR = ar csr
RM = rm -rf

all : ${NAME}

${NAME} : ${OBJS}
	${AR} ${NAME} $^

clean :
	${RM} ${OBJS}

fclean : clean
	${RM} ${NAME}

re : fclean all

.PHONY: all clean fclean re