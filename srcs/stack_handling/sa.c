/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sa.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdal-mol <dolmalinn@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/21 17:48:04 by pdal-mol          #+#    #+#             */
/*   Updated: 2021/11/24 12:27:41 by pdal-mol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	sa(t_stack **a, t_stack **b)
{
	t_stack	*temp;

	(void)b;
	if (stacksize(*a) < 3)
		return ;
	temp = *a;
	*a = (*a)->next;
	temp->next = (*a)->next;
	(*a)->next = temp;
}
