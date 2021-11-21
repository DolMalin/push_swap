/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdal-mol <dolmalinn@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/20 16:05:05 by pdal-mol          #+#    #+#             */
/*   Updated: 2021/11/21 17:14:08 by pdal-mol         ###   ########.fr       */
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
//

/* =============== STRUCTURES =============== */

/* =============== PROTOTYPES =============== */

/* =============== DEBUG /TO REMOVE/ =============== */
void	print_stack(t_list *a, t_list *b);

/* =============== INPUT PARSING =============== */
int		check_input_is_all_int(int ac, char **av);
void	check_input_validity(int ac, char **av);

/* =============== ERROR HANDLING =============== */
void	exit_program_with_error(void);

/* =============== STACK HANDLING =============== */
void	init_stacks(t_list **a, t_list **b, int ac, char **av);

#endif