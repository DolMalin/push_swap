/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdal-mol <dolmalinn@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/20 16:05:05 by pdal-mol          #+#    #+#             */
/*   Updated: 2021/11/23 13:01:04 by pdal-mol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

/* =============== INCLUDES =============== */
# include "../libft/libft.h"

# include <limits.h>
# include <stdlib.h>

// TO REMOVE
# include <stdio.h>
//

/* =============== STRUCTURES =============== */
typedef struct	s_stack
{
	int	content;
	struct s_stack *next;
}				t_stack;


typedef struct	s_chunk
{
	int	min;
	int	max;
}				t_chunk;

/* =============== PROTOTYPES =============== */

/* =============== DEBUG /TO REMOVE/ =============== */
void	print_stack(t_stack *a, t_stack *b);

/* =============== INPUT PARSING =============== */
int		check_input_is_all_int(int ac, char **av);
void	check_input_validity(int ac, char **av);

/* =============== ERROR HANDLING =============== */
void	exit_program_with_error(void);

/* =============== STACK HANDLING =============== */
void	init_stacks(t_stack **a, t_stack **b, int ac, char **av);
void	stackadd_back(t_stack **alst, t_stack *new);
void	stackadd_front(t_stack **alst, t_stack *new);
t_stack	*stacklast(t_stack *lst);
t_stack	*stacknew(int content);
int		stacksize(t_stack *lst);
void	sa(t_stack **a);
void	sb(t_stack **b);
void	ss(t_stack **a, t_stack **b);
void	pa(t_stack **a, t_stack **b);
void	pb(t_stack **a, t_stack **b);
void	ra(t_stack **a);
void	rb(t_stack **b);
void	rr(t_stack **a, t_stack **b);
void	rra(t_stack **a);
void	rrb(t_stack **b);
void	rrr(t_stack **a, t_stack **b);

/* =============== SORTING =============== */
void	sorting(t_stack **a, t_stack **b);

#endif