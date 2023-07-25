# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mtoledan <mtoledan@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/18 18:35:44 by mtoledan          #+#    #+#              #
#    Updated: 2023/04/24 16:21:59 by mtoledan         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
CC = gcc
CFLAGS = -Wall -Wextra -Werror
SRCS =  ft_isalpha.c \
		ft_atoi.c \
		ft_strlen.c \
		ft_isdigit.c \
		ft_isalnum.c \
		ft_isascii.c \
		ft_isprint.c \
		ft_memset.c \
		ft_bzero.c \
		ft_memcpy.c \
		ft_tolower.c \
		ft_toupper.c \
		ft_putchar_fd.c \
 		ft_putstr_fd.c \
		ft_putendl_fd.c \
		ft_strdup.c \
		ft_calloc.c \
		ft_strlcpy.c \
		ft_memmove.c \
		ft_strncmp.c \
		ft_putnbr_fd.c \
		ft_strchr.c \
		ft_strrchr.c \
		ft_memcmp.c \
		ft_memchr.c \
		ft_strlcat.c \
		ft_strnstr.c \
		ft_substr.c \
		ft_strjoin.c \
		ft_split.c \
		ft_strmapi.c \
		ft_striteri.c \
		ft_strtrim.c \
		ft_itoa.c

OBJS = ${SRCS:.c=.o}
RM = rm -f

all: ${NAME}

.c.o:
	@echo "Compiling ..."
	${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

${NAME}: ${OBJS}
	ar rcs $(NAME) $(OBJS) 
#	${CC} -o ${NAME} ${OBJS} 
	@echo "Compilation OK ! Library successfully created.\n"

clean:
	${RM} ${OBJS}
	@echo ".o files removed\n"

fclean: clean
	${RM} ${NAME}
	@echo ".a removed\n"

re: fclean all
	@echo "(remake)\n"
