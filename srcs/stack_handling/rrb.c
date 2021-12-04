/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rrb.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdal-mol <dolmalinn@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 11:19:03 by pdal-mol          #+#    #+#             */
/*   Updated: 2021/12/04 14:12:37 by pdal-mol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	rrb(t_stack **b, t_stack **a)
{
	t_stack	*temp_second;
	t_stack	*temp_before_last;
	t_stack	*temp_last;

	(void)a;
	if (stacksize(*b) < 2)
		return ;
	temp_before_last = (*b);
	temp_last = stacklast(*b);
	temp_second = (*b)->next;
	while (temp_before_last->next->next)
		temp_before_last = temp_before_last->next;
	temp_before_last->next = NULL;
	temp_last->next = *b;
	*b = temp_last;
	ft_putstr_fd("rrb\n", 1);
}
