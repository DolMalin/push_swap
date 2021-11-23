/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rra.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdal-mol <dolmalinn@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 10:52:53 by pdal-mol          #+#    #+#             */
/*   Updated: 2021/11/23 12:05:13 by pdal-mol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	rra(t_stack **a)
{
	t_stack	*temp_first;
	t_stack	*temp_before_last;
	t_stack	*temp_last;

	if (stacksize(*a) < 2)
		return ;
	temp_first = *a;
	temp_last = stacklast(*a);
	temp_before_last = *a;
	while (temp_before_last->next->next)
		temp_before_last = temp_before_last->next;
	temp_last->next = temp_first;
	temp_before_last->next = NULL;
	*a = temp_last;
}
