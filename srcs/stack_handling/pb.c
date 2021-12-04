/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pb.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdal-mol <dolmalinn@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/04 14:11:17 by pdal-mol          #+#    #+#             */
/*   Updated: 2021/12/04 14:12:03 by pdal-mol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	pb(t_stack **a, t_stack **b)
{
	t_stack	*start_a;

	start_a = (*a)->next;
	stackadd_front(b, *a);
	*a = start_a;
	ft_putstr_fd("pb\n", 1);
}
