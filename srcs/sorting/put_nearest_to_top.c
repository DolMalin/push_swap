/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   put_nearest_to_top.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdal-mol <dolmalinn@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 10:39:44 by pdal-mol          #+#    #+#             */
/*   Updated: 2021/12/07 16:00:57 by pdal-mol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

int	put_nearest_to_top(t_stack **a, t_stack **b, t_hold h, int s)
{
	int	hold1_move_len;
	int	hold2_move_len;

	hold1_move_len = hold_to_top_moves_len(h.first_pos, s);
	hold2_move_len = hold_to_top_moves_len(h.second_pos, s);
	if (hold1_move_len == -1 && hold2_move_len == -1)
		return (0);
	if (hold1_move_len < hold2_move_len || hold2_move_len == -1)
	{
		if (h.first_pos < s / 2)
			mv(a, b, ra, hold1_move_len);
		else
			mv(a, b, rra, hold1_move_len);
		return (1);
	}
	if (h.second_pos < s / 2)
		mv(a, b, ra, hold2_move_len);
	else
		mv(a, b, rra, hold2_move_len);
	return (1);
}
