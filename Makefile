# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pdal-mol <dolmalinn@gmail.com>             +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/20 14:34:26 by pdal-mol          #+#    #+#              #
#    Updated: 2021/11/20 16:15:18 by pdal-mol         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap


INPUT_PARSING = \


FILES = \
main.c

LIBFT_FILES = \
ft_isalpha.c\
ft_isdigit.c\
ft_isalnum.c\
ft_isascii.c\
ft_isprint.c\
ft_strlen.c\
ft_memset.c\
ft_bzero.c\
ft_memcpy.c\
ft_memmove.c\
ft_strlcpy.c\
ft_strlcat.c\
ft_toupper.c\
ft_tolower.c\
ft_strchr.c\
ft_strrchr.c\
ft_strncmp.c\
ft_memchr.c\
ft_memcmp.c\
ft_strnstr.c\
ft_atoi.c\
ft_calloc.c\
ft_strdup.c\
ft_substr.c\
ft_strjoin.c\
ft_strtrim.c\
ft_split.c\
ft_itoa.c\
ft_strmapi.c\
ft_striteri.c\
ft_putchar_fd.c\
ft_putstr_fd.c\
ft_putendl_fd.c\
ft_putnbr_fd.c\
ft_putunbr_fd.c

SRCS = $(addprefix ./srcs/,$(FILES))
SRCS_LIBFT = $(addprefix ./libft/,$(LIBFT_FILES))
OBJ = $(SRCS:.c=.o)

FLAGS = -Wall -Wextra -Werror

all: $(NAME)

%.o: %.c $(SRCS_LIBFT) ./includes/push_swap.h ./libft/libft.h
	gcc $(FLAGS) -c $< -o $@

$(NAME) : $(OBJ) 
	make -C ./libft
	cp ./libft/libft.a ./
	gcc $(OBJ) libft.a -o $(NAME)

clean:
	make -C ./libft clean
	/bin/rm -rf $(OBJ)

fclean: clean
	/bin/rm -rf libftprintf.a
	/bin/rm -rf libft/libft.a
	/bin/rm -rf ./libft.a
	/bin/rm -rf $(NAME)

re : fclean all

.PHONY: all clean fclean re