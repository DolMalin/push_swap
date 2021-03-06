# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pdal-mol <dolmalinn@gmail.com>             +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/20 14:34:26 by pdal-mol          #+#    #+#              #
#    Updated: 2021/12/01 11:00:28by pdal-mol         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap

INPUT_PARSING = \
				check_input_validity.c\
				check_input_is_all_int.c\
				check_double.c\
				argsclear.c

ERROR_HANDLING = \
				exit_program_with_error.c

STACK_HANDLING = \
				check_stack_sort.c\
				init_stacks.c\
				stackadd_back.c\
				stackclear.c\
				stackadd_front.c\
				stacklast.c\
				stacknew.c\
				stacksize.c\
				stackmin.c\
				stackmax.c\
				stackmin_elem.c\
				stackmax_elem.c\
				get_elem_pos.c\
				sa.c\
				sb.c\
				pa.c\
				pb.c\
				ra.c\
				rb.c\
				rra.c\
				rrb.c\

SORTING = \
				sorting.c\
				is_in_chunk.c\
				get_hold.c\
				hold_to_top_moves_len.c\
				put_mina_to_top.c\
				put_minb_to_top.c\
				put_max_to_top.c\
				put_nearest_to_top.c\
				mv.c\
				sort_chunk_move.c\
				sort_chunk.c\
				sort_max.c\
				sort_two.c\
				sort_three.c\
				sort_five.c

FILES = \
				main.c\
				$(addprefix debug/,$(DEBUG))\
				$(addprefix input_parsing/,$(INPUT_PARSING))\
				$(addprefix error_handling/,$(ERROR_HANDLING))\
				$(addprefix stack_handling/,$(STACK_HANDLING))\
				$(addprefix sorting/,$(SORTING))

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
				ft_atoll.c\
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
ARGS = `arg="$(filter-out $@,$(MAKECMDGOALS))" && echo $${arg:-${1}}`

FLAGS = -Wall -Wextra -Werror

all: $(NAME)

%.o: %.c $(SRCS_LIBFT) ./includes/push_swap.h ./libft/libft.h
	gcc $(FLAGS) -c $< -o $@

$(NAME) : $(OBJ) 
	make bonus -C ./libft
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

%:
    @:

leaks: $(NAME)
	leaks -atExit -- ./$(NAME) $(call ARGS,defaultstring)

.PHONY: all clean fclean leaks re
