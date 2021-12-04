/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pa.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdal-mol <dolmalinn@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/21 18:31:29 by pdal-mol          #+#    #+#             */
/*   Updated: 2021/12/04 14:11:03 by pdal-mol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	pa(t_stack **a, t_stack **b)
{
	t_stack	*start_b;

	start_b = (*b)->next;
	stackadd_front(a, *b);
	*b = start_b;
	ft_putstr_fd("pa\n", 1);
}
