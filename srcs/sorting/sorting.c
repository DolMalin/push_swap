/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdal-mol <dolmalinn@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 18:45:11 by pdal-mol          #+#    #+#             */
/*   Updated: 2021/11/24 12:19:33 by pdal-mol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"


/* 
	- posix of the two firsts hold works
	=> compute which moove will be the shortest 
*/

int	hold_to_top_moves_len(int hold_pos, int stack_size)
{
	if (hold_pos < stack_size / 2)
		return (hold_pos);
	return (stack_size - hold_pos);
}

void	move_elem_in_stack(t_stack **a, void (*f)(t_stack **), int count)
{
	int	i;

	i = 0;
	while (i < count)
	{
		(*f)(a);
		i++;
	}
}

void	put_nearest_to_top(t_stack **a, t_hold hold, int stack_size)
{
	int hold_first_move_len;
	int	hold_second_move_len;

	hold_first_move_len = hold_to_top_moves_len(hold.first_pos, stack_size);
	hold_second_move_len = hold_to_top_moves_len(hold.second_pos, stack_size);
	if (hold_first_move_len < hold_second_move_len)
	{
		if (hold.first_pos < stack_size / 2)
			move_elem_in_stack(a, ra, hold_first_move_len);
		else
			move_elem_in_stack(a, rra, hold_first_move_len);
		return ;
	}
	if (hold.second_pos < stack_size / 2)
		move_elem_in_stack(a, ra, hold_second_move_len);
	else
		move_elem_in_stack(a, rra, hold_second_move_len);
}

void	sorting(t_stack **a, t_stack **b)
{
	t_chunk chunk;
	t_hold	hold;

	(void)b;
	chunk.min = 0;
	chunk.max = 20;
	hold = get_hold(a, chunk);

	put_nearest_to_top(a, hold, stacksize(*a));
}
