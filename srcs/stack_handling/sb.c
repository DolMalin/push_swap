/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sb.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdal-mol <dolmalinn@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/21 18:05:10 by pdal-mol          #+#    #+#             */
/*   Updated: 2021/12/02 13:03:44 by pdal-mol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	sb(t_stack **b, t_stack **a)
{
	t_stack	*temp;

	(void)a;
	if (stacksize(*b) < 2)
		return ;
	temp = *b;
	*b = (*b)->next;
	temp->next = (*b)->next;
	(*b)->next = temp;
	ft_putstr_fd("sb\n", 1);
}
