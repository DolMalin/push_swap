/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   put_nearest_to_top.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdal-mol <dolmalinn@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 10:39:44 by pdal-mol          #+#    #+#             */
/*   Updated: 2021/12/04 13:50:10 by pdal-mol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

int	put_nearest_to_top(t_stack **a, t_stack **b, t_hold hold, int stack_size)
{
	int	hold1_move_len;
	int	hold2_move_len;

	hold1_move_len = hold_to_top_moves_len(hold.first_pos, stack_size);
	hold2_move_len = hold_to_top_moves_len(hold.second_pos, stack_size);
	if (hold1_move_len == -1 && hold2_move_len == -1)
		return (0);
	if (hold1_move_len < hold2_move_len || hold2_move_len == -1)
	{
		if (hold.first_pos < stack_size / 2)
			move(a, b, ra, hold1_move_len);
		else
			move(a, b, rra, hold1_move_len);
		return (1);
	}
	if (hold.second_pos < stack_size / 2)
		move(a, b, ra, hold2_move_len);
	else
		move(a, b, rra, hold2_move_len);
	return (1);
}
