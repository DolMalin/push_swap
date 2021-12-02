/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   put_mina_to_top.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdal-mol <dolmalinn@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 12:14:59 by pdal-mol          #+#    #+#             */
/*   Updated: 2021/12/02 16:58:43 by pdal-mol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	put_mina_to_top(t_stack **a)
{
	int		min;
	t_stack	*min_elem;

	if (stacksize(*a) < 1)
		return ;
	min = stackmin(a);
	min_elem = stackmin_elem(a);
	if (get_elem_pos(a, min_elem) < stacksize(*a) / 2)
	{
		while ((*a)->content != min)
			ra(a, a);
		return ;
	}
	while ((*a)->content != min)
		rra(a, a);
}
