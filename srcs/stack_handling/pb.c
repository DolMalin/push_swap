/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pb.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdal-mol <dolmalinn@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/21 18:10:52 by pdal-mol          #+#    #+#             */
/*   Updated: 2021/11/24 13:33:22 by pdal-mol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	pb(t_stack **a, t_stack **b)
{
	t_stack	*temp;

	if (stacksize(*a) < 1)
		return ;
	temp = (*a)->next;
	stackadd_back(b, *a);
	
	ft_putstr_fd("pb\n", 1);
}
