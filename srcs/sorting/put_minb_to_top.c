/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   put_minb_to_top.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdal-mol <dolmalinn@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/02 16:58:58 by pdal-mol          #+#    #+#             */
/*   Updated: 2021/12/02 17:01:00 by pdal-mol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "../../includes/push_swap.h"

void	put_minb_to_top(t_stack **b)
{
	int		min;
	t_stack	*min_elem;

	if (stacksize(*b) < 1)
		return ;
	min = stackmin(b);
	min_elem = stackmin_elem(b);
	if (get_elem_pos(b, min_elem) < stacksize(*b) / 2)
	{
		while ((*b)->content != min)
			rb(b, b);
		return ;
	}
	while ((*b)->content != min)
		rrb(b, b);
}
