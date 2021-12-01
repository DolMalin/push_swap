/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdal-mol <dolmalinn@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 18:45:11 by pdal-mol          #+#    #+#             */
/*   Updated: 2021/12/01 23:50:29 by pdal-mol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	sorting(t_stack **a, t_stack **b)
{
	if (check_stack_sort(a))
		return ;
	if (stacksize(*a) == 3)
		sort_three(a, b);
	if (stacksize(*a) >= 5)
	{
		sort_chunk(a, b, 0, 19);
		sort_max(a, b);
	}
	
}
