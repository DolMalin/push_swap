/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   put_max_to_top.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdal-mol <dolmalinn@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 12:31:44 by pdal-mol          #+#    #+#             */
/*   Updated: 2021/12/03 10:26:48 by pdal-mol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	put_max_to_top(t_stack **b)
{
	int		max;
	t_stack *max_elem;

	if (stacksize(*b) < 1)
		return ;
	max = stackmax(b);
	max_elem = stackmax_elem(b);
	if (get_elem_pos(b, max_elem) < stacksize(*b) / 2)
	{
		while ((*b)->content != max)
			rb(b, b);
		return ;
	}
	while ((*b)->content != max)
		rrb(b, b);

}
