# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lzi-xian <lzi-xian@student.42kl.edu.my>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/08 09:10:05 by lzi-xian          #+#    #+#              #
#    Updated: 2022/09/08 09:35:58 by lzi-xian         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	=	srcs/ft_putchar.c srcs/ft_swap.c srcs/ft_putstr.c srcs/ft_strlen.c srcs/ft_strcmp.c
OBJS	=	${SRCS:.c=.o}
HEAD	=	includes
NAME	=	libft.a
ARCR	= 	ar cr
RMRF	=	rm -rf
CFLAGS	=	-Wall -Wextra -Werror
GCC		=	gcc

.c.o:
	${GCC} ${CFLAGS} -c $< -o ${<:.c=.o} -I ${HEAD}

${NAME}:	${OBJS}
	${ARCR} ${NAME} ${OBJS}

all:	${NAME}

clean:
	${RMRF} ${OBJS}

fclean:	clean
	${RMRF} ${NAME}

re:	fclean all