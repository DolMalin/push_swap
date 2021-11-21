/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdal-mol <dolmalinn@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/20 16:05:05 by pdal-mol          #+#    #+#             */
/*   Updated: 2021/11/21 13:53:14 by pdal-mol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

/* =============== INCLUDES =============== */
# include "../libft/libft.h"

#include <limits.h>
#include <stdlib.h>
// TO REMOVE
#include <stdio.h>

/* =============== STRUCTURES =============== */
typedef struct	s_stack
{
	int	**a;
	int	**b;	
}				t_stack;

/* =============== PROTOTYPES =============== */

/* =============== DEBUG /TO REMOVE/ =============== */
void	print_stacks(t_stack *stack);

/* =============== INPUT PARSING =============== */
int		check_input_is_all_int(int ac, char **av);
void	check_input_validity(int ac, char **av);

/* =============== ERROR HANDLING =============== */
void	exit_program_with_error(void);

/* =============== STACK HANDLING =============== */
void	init_stack(t_stack *stack, char **av, size_t len);
void	fill_stack(int *stack, char **av, size_t len);

#endif