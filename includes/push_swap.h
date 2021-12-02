/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdal-mol <dolmalinn@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/20 16:05:05 by pdal-mol          #+#    #+#             */
/*   Updated: 2021/12/01 11:20:42by pdal-mol         ###   ########.fr       */
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

/* =============== MACROS =============== */
# define CHUNK_SIZE_SMALL 20
# define CHUNK_SIZE_BIG 45

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


typedef struct	s_hold
{
	int	first_pos;
	int	second_pos;
}				t_hold;
/* =============== PROTOTYPES =============== */

/* =============== DEBUG /TO REMOVE/ =============== */
void	print_stack(t_stack *a, t_stack *b);

/* =============== INPUT PARSING =============== */
int		check_input_is_all_int(int ac, char **args);
int		check_double(char **args);
char	**check_input_validity(int ac, char **av);

/* =============== ERROR HANDLING =============== */
void	exit_program_with_error(void);

/* =============== STACK HANDLING =============== */
void	init_stacks(t_stack **a, t_stack **b, char **args);
int		check_stack_sort(t_stack **a);
void	stackclear(t_stack **stack, void (*del)(void *));
void	stackadd_back(t_stack **alst, t_stack *new);
void	stackadd_front(t_stack **alst, t_stack *new);
t_stack	*stacklast(t_stack *lst);
t_stack	*stacknew(int content);
int		stacksize(t_stack *lst);
int		stackmin(t_stack **a);
int		stackmax(t_stack **a);
t_stack	*stackmin_elem(t_stack **a);
t_stack	*stackmax_elem(t_stack **a);
int		get_elem_pos(t_stack **stack, t_stack *elem);
void	sa(t_stack **a, t_stack **b);
void	sb(t_stack **b, t_stack **a);
void	ss(t_stack **a, t_stack **b);
void	pa(t_stack **a, t_stack **b);
void	pb(t_stack **a, t_stack **b);
void	ra(t_stack **a, t_stack **b);
void	rb(t_stack **b, t_stack **a);
void	rr(t_stack **a, t_stack **b);
void	rra(t_stack **a, t_stack **b);
void	rrb(t_stack **b, t_stack **a);
void	rrr(t_stack **a, t_stack **b);

/* =============== SORTING =============== */
void	sorting(t_stack **a, t_stack **b);
int		is_in_chunk(int a, t_chunk chunk);
t_hold	get_hold(t_stack **a, t_chunk chunk);
int		hold_to_top_moves_len(int hold_pos, int stack_size);
void	move_elem_in_stack(t_stack **a, t_stack **b, void (*f)(t_stack **, t_stack **), int count);
int		put_nearest_to_top(t_stack **a, t_stack **b, t_hold hold, int stack_size);
void	put_mina_to_top(t_stack **a);
void	put_minb_to_top(t_stack **b);
void	put_max_to_top(t_stack **b);
int		sort_chunk_move(t_stack **a, t_stack **b, int min, int max);
void	sort_chunk(t_stack **a, t_stack **b, int min, int max, int chunk_size);
void	sort_max(t_stack **a, t_stack **b);
void	sort_two(t_stack **a, t_stack **b);
void	sort_three(t_stack **a, t_stack **b);
void	sort_five(t_stack **a, t_stack **b);

#endif