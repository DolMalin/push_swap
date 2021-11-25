/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_chunk_move.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdal-mol <dolmalinn@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 12:10:44 by pdal-mol          #+#    #+#             */
/*   Updated: 2021/11/25 12:43:29 by pdal-mol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

int	sort_chunk_move(t_stack **a, t_stack **b, int min, int max)
{
	t_hold	hold;
	t_chunk	chunk;

	chunk.min = min;
	chunk.max = max;
	hold = get_hold(a, chunk);
	if (put_nearest_to_top(a, b, hold, stacksize(*a)))
	{
		put_min_to_top(b);
		pb(a, b);
		return (1);
	}
	return (0);
}
