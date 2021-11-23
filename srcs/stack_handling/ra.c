/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ra.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdal-mol <dolmalinn@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 202/11/21 19:56:41 by pdal-mol          #+#    #+#             */
/*   Updated: 2021/11/21 20:39:43 by pdal-mol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	ra(t_stack **a)
{
	t_stack	*temp_first;
	t_stack	*temp_second;
	t_stack	*temp_last;

	if (stacksize(*a) < 2)
		return ;
	temp_second = (*a)->next;
	temp_first = *a;
	temp_last = stacklast(*a);
	temp_last->next = temp_first;
	temp_first->next = NULL;
	*a = temp_second;
}
