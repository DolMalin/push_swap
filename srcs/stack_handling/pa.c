/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pa.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdal-mol <dolmalinn@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/21 18:31:29 by pdal-mol          #+#    #+#             */
/*   Updated: 2021/11/23 12:01:28 by pdal-mol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	pa(t_stack **a, t_stack **b)
{
	t_stack	*temp;

	if (stacksize(*b) < 1)
		return ;
	temp = (*b)->next;
	stackadd_front(a, *b);
	*b = temp;
}
