/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rb.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdal-mol <dolmalinn@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 10:43:01 by pdal-mol          #+#    #+#             */
/*   Updated: 2021/11/24 12:26:48 by pdal-mol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	rb(t_stack **b, t_stack **a)
{
	t_stack	*temp_first;
	t_stack	*temp_second;
	t_stack	*temp_last;

	(void)a;
	if (stacksize(*b) < 2)
		return ;
	temp_second = (*b)->next;
	temp_first = *b;
	temp_last = stacklast(*b);
	temp_last->next = temp_first;
	temp_first->next = NULL;
	*b = temp_second;
}
