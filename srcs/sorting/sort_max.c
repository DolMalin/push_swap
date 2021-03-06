/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_max.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdal-mol <dolmalinn@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 12:59:54 by pdal-mol          #+#    #+#             */
/*   Updated: 2021/12/04 13:30:30 by pdal-mol         ###   ########.fr       */
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
