/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pb.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdal-mol <dolmalinn@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/21 18:10:52 by pdal-mol          #+#    #+#             */
/*   Updated: 2021/11/24 17:12:33by pdal-mol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	pb(t_stack **a, t_stack **b)
{

	t_stack *start_a;

	start_a = (*a)->next;
	stackadd_back(b, *a);
	(*a)->next = NULL;
	*a = start_a;

	ft_putstr_fd("pb\n", 1);
	print_stack(*a, *b);
}
