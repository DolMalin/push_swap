/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   put_nearest_to_top.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdal-mol <dolmalinn@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 10:39:44 by pdal-mol          #+#    #+#             */
/*   Updated: 2021/11/25 10:40:16 by pdal-mol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

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
