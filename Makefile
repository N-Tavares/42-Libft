# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nunda-si <nunda-si@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/11/06 14:53:58 by nunda-si          #+#    #+#              #
#    Updated: 2026/11/06 22:17:38 by nunda-si         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Name of executable file
NAME = libft.a

# Compilater to use and Flag to used during the compilation
CC = cc
CFLAGS = -Wall -Wextra -Werror

#Sources
PART1 = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c \
		ft_toupper.c ft_tolower.c ft_strlen.c ft_strlcpy.c ft_strlcat.c \
		ft_strchr.c ft_strrchr.c ft_strncmp.c ft_strnstr.c ft_strdup.c \
		ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c ft_memchr.c \
		ft_memcmp.c ft_calloc.c ft_atoi.c 

PART2 = ft_substr.c ft_strjoin.c ft_strtrim.c ft_split.c ft_itoa.c \
		ft_strmapi.c ft_striteri.c ft_putchar_fd.c ft_putstr_fd.c \
		ft_putendl_fd.c ft_putnbr_fd.c 

PART3 = ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c \
		ft_lstadd_back.c ft_lstdelone.c ft_lstclear.c ft_lstiter.c \
		ft_lstmap.c

# Source list (.c)
SCR = ${PART1} ${PART2} ${PART3}

# Automatically creates a list of object folders (.o)
OBJS = ${SCR:.c=.o}

#Rule to execute make
all:	$(NAME)

#Create executable from object file
$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

#Compile any folder .c to .o
# $< --> Current source file
# $@ --> Object file create

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

#Remove only the object files (.o)
clean:
	rm -f	$(OBJS)

#Remove object files and executable
fclean:	clean
	rm -f	$(NAME)

#Delete all and recompile the project
re:	fclean all

#Indicate to make that rules aren't real files
.PHONY:	all clean fclean re

