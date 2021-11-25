/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdal-mol <dolmalinn@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 18:45:11 by pdal-mol          #+#    #+#             */
/*   Updated: 2021/11/25 12:43:14 by pdal-mol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	sort_max(t_stack **a, t_stack **b)
{
	while (stacksize(*b) > 0)
	{
		put_max_to_top(b);
		pa(a, b);
	}
}

void	sorting(t_stack **a, t_stack **b)
{
	sort_chunk(a, b, 0, 19);
	sort_max(a, b);

}
