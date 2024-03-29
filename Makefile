# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: njerasea <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/02/21 23:20:35 by njerasea          #+#    #+#              #
#    Updated: 2023/03/18 17:02:25 by njerasea         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= libft.a
SRCS	= ft_isalpha.c \
	  ft_isdigit.c \
	  ft_isalnum.c \
	  ft_isascii.c \
	  ft_isprint.c \
	  ft_strlen.c \
	  ft_strlcpy.c \
	  ft_toupper.c \
	  ft_tolower.c \
	  ft_strlcat.c \
	  ft_strchr.c \
	  ft_strrchr.c \
	  ft_strncmp.c \
	  ft_strnstr.c \
	  ft_atoi.c \
	  ft_bzero.c \
	  ft_memset.c \
	  ft_memcpy.c \
	  ft_memmove.c \
	  ft_memchr.c \
	  ft_memcmp.c \
	  ft_calloc.c \
	  ft_strdup.c \
	  ft_substr.c \
	  ft_strjoin.c \
	  ft_strtrim.c \
	  ft_putchar_fd.c \
          ft_putstr_fd.c \
          ft_putendl_fd.c \
          ft_putnbr_fd.c \
          ft_striteri.c \
          ft_strmapi.c \
          ft_itoa.c \
          ft_split.c

BONUS_SRCS	= ft_lstnew.c \
	  	  ft_lstadd_front.c \
	  	  ft_lstsize.c \
          	  ft_lstlast.c \
          	  ft_lstadd_back.c \
          	  ft_lstdelone.c \
          	  ft_lstclear.c \
	  	  ft_lstiter.c \
	  	  ft_lstmap.c

LIBC	= ar -rcs
CC	= gcc -Wall -Werror -Wextra
RM	= rm -rf
OBJS	= $(SRCS:.c=.o)
OBBJS	= $(BONUS_SRCS:.c=.o)

%o: %c
	$(CC) -c $< -o $@

all: $(NAME)

$(NAME): $(OBJS)
	$(LIBC) $(NAME) $(OBJS)

bonus: $(OBBJS)
	$(LIBC) $(NAME) $(OBBJS)

clean:
	$(RM) $(OBJS) $(OBBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all bonus clean fclean re
