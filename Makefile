# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vipinhei <vipinhei@student.42porto.com>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/04/08 15:33:54 by vipinhei          #+#    #+#              #
#    Updated: 2025/04/08 15:33:59 by vipinhei         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
AR = ar rsc
CC = gcc
CFLAGS = -Wall -Wextra -Werror
RM = rm -rf
SRCS = ft_atoi.c ft_bzero.c ft_isalnum.c ft_isalpha.c ft_isascii.c \
	   ft_isdigit.c ft_isprint.c ft_memchr.c ft_memcmp.c ft_memcpy.c \
	   ft_memmove.c ft_memset.c ft_strchr.c ft_strlcat.c ft_strlcpy.c \
	   ft_strlen.c ft_strncmp.c ft_strnstr.c ft_strrchr.c ft_tolower.c \
	   ft_toupper.c ft_calloc.c
OBJS = $(SRCS:.c=.o)

.SILENCE:

all: $(NAME)
$(NAME): $(OBJS)
	$(AR) $(NAME) $(OBJS)
	
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all
