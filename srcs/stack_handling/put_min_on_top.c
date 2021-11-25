/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   put_min_on_top.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdal-mol <dolmalinn@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 12:14:59 by pdal-mol          #+#    #+#             */
/*   Updated: 2021/11/25 12:15:31 by pdal-mol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	put_min_to_top(t_stack **b)
{
	int	min;

	if (stacksize(*b) < 1)
		return ;
	min = stackmin(b);
	while ((*b)->content != min)
		rb(b, b);
}
