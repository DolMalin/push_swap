/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sb.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdal-mol <dolmalinn@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/21 18:05:10 by pdal-mol          #+#    #+#             */
/*   Updated: 2021/11/24 12:29:41 by pdal-mol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	sb(t_stack **b, t_stack **a)
{
	t_stack	*temp;

	(void)a;
	if (stacksize(*b) < 3)
		return ;
	temp = *b;
	*b = (*b)->next;
	temp->next = (*b)->next;
	(*b)->next = temp;
}
