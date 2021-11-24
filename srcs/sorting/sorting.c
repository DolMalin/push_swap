/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdal-mol <dolmalinn@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 18:45:11 by pdal-mol          #+#    #+#             */
/*   Updated: 2021/11/24 13:40:18 by pdal-mol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"


/* 
	- fix the bug of the stack b who juste replace when push instead of concatenate 
*/

int	hold_to_top_moves_len(int hold_pos, int stack_size)
{
	if (hold_pos < stack_size / 2)
		return (hold_pos);
	return (stack_size - hold_pos);
}

void	move_elem_in_stack(t_stack **a, t_stack **b, void (*f)(t_stack **, t_stack **), int count)
{
	int	i;

	i = 0;
	while (i < count)
	{
		(*f)(a, b);
		i++;
	}
}

int	put_nearest_to_top(t_stack **a, t_stack **b, t_hold hold, int stack_size)
{
	int hold_first_move_len;
	int	hold_second_move_len;

	hold_first_move_len = hold_to_top_moves_len(hold.first_pos, stack_size);
	hold_second_move_len = hold_to_top_moves_len(hold.second_pos, stack_size);
	if ( hold_first_move_len == -1 && hold_second_move_len == -1)
		return (0);
	if (hold_first_move_len < hold_second_move_len || hold_second_move_len == -1)
	{
		if (hold.first_pos < stack_size / 2)
			move_elem_in_stack(a, b, ra, hold_first_move_len);
		else
			move_elem_in_stack(a, b, rra, hold_first_move_len);
		return (1);
	}
	if (hold.second_pos < stack_size / 2)
		move_elem_in_stack(a, b, ra, hold_second_move_len);
	else
		move_elem_in_stack(a, b, rra, hold_second_move_len);
	return (1);
}

int	sort_move(t_stack **a, t_stack **b, t_chunk chunk)
{
	t_hold	hold;

	hold = get_hold(a, chunk);
	if (put_nearest_to_top(a, b, hold, stacksize(*a)))
	{
		pb(a, b);
		return (1);
	}
	return (0);
}

void	sorting(t_stack **a, t_stack **b)
{
	t_chunk chunk;

	chunk.min = 0;
	chunk.max = 20;
	sort_move(a, b, chunk);
	print_stack(*a, *b);
	sort_move(a, b, chunk);
}
