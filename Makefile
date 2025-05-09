# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vipinhei <vipinhei@student.42porto.com>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/04/08 15:33:54 by vipinhei          #+#    #+#              #
#    Updated: 2025/05/08 18:58:32 by vipinhei         ###   ########.fr        #
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
	   ft_toupper.c ft_calloc.c ft_strdup.c ft_substr.c ft_strjoin.c \
	   ft_strtrim.c ft_split.c ft_itoa.c ft_putchar_fd.c ft_putstr_fd.c \
	   ft_putendl_fd.c ft_putnbr_fd.c ft_strmapi.c ft_striteri.c
BONUS_SRCS = ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c \
	   ft_lstadd_back.c ft_lstdelone.c ft_lstclear.c ft_lstiter.c \
	   ft_lstmap.c
OBJS = $(SRCS:.c=.o)
BONUS_OBJS = $(BONUS_SRCS:.c=.o)

.SILENT:

all: $(NAME)
$(NAME): $(OBJS)
	$(AR) $(NAME) $(OBJS)
	
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJS) $(BONUS_OBJS)

fclean: clean
	$(RM) $(NAME)

bonus: $(OBJS) $(BONUS_OBJS)
	$(AR) $(NAME) $(OBJS) $(BONUS_OBJS)

cc:
	cc -lbsd mymain.c libft.a

val: 
	valgrind ./a.out

re: fclean all
