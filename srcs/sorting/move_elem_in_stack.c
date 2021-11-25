/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move_elem_in_stack.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdal-mol <dolmalinn@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 10:37:48 by pdal-mol          #+#    #+#             */
/*   Updated: 2021/11/25 10:38:10 by pdal-mol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	move_elem_in_stack(t_stack **a, t_stack **b, void (*f)(t_stack **, t_stack **), int count)
{
	int	i;

	i = 0;
	while (i < count)
	{
		(*f)(a, b);
		i++;
	}
}
