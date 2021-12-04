/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rra.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdal-mol <dolmalinn@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 10:52:53 by pdal-mol          #+#    #+#             */
/*   Updated: 2021/12/04 14:12:28 by pdal-mol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	rra(t_stack **a, t_stack **b)
{
	t_stack	*temp_second;
	t_stack	*temp_before_last;
	t_stack	*temp_last;

	(void)b;
	if (stacksize(*a) < 2)
		return ;
	temp_before_last = (*a);
	temp_last = stacklast(*a);
	temp_second = (*a)->next;
	while (temp_before_last->next->next)
		temp_before_last = temp_before_last->next;
	temp_before_last->next = NULL;
	temp_last->next = *a;
	*a = temp_last;
	ft_putstr_fd("rra\n", 1);
}
