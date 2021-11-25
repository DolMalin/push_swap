/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   put_max_to_top.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdal-mol <dolmalinn@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 12:31:44 by pdal-mol          #+#    #+#             */
/*   Updated: 2021/11/25 12:41:38 by pdal-mol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	put_max_to_top(t_stack **b)
{
	int	max;

	if (stacksize(*b) < 1)
		return ;
	max = stackmax(b);
	while ((*b)->content != max)
		rb(b, b);
}
