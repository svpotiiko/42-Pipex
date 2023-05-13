# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vpotiiko <vpotiiko@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/20 14:38:40 by vpotiiko          #+#    #+#              #
#    Updated: 2023/02/26 17:58:58 by vpotiiko         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = pipex

SRCS =	pipex.c \
		get_path.c \
		freestr.c \
		procs.c \
		libft/ft_strjoin.c \
		libft/ft_strlen.c \
		libft/ft_split.c \
		libft/ft_strncmp.c \
		libft/ft_strnstr.c
		
OBJ =	pipex.o \
		get_path.o \
		freestr.o \
		procs.o \
		ft_strjoin.o \
		ft_strlen.o \
		ft_split.o \
		ft_strncmp.o \
		ft_strnstr.o 

HEADERS =	pipex.h \
			libft/libft.h

${NAME}:
	cc -Wall -Wextra -Werror -c ${SRCS} -I ${HEADERS}
	cc ${OBJ} -g -fsanitize=address -o ${NAME}
all: ${NAME}

clean:
	rm -f ${OBJ}

fclean: clean
	rm -f ${NAME}

re: fclean all