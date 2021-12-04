/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move_elem_in_stack.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdal-mol <dolmalinn@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 10:37:48 by pdal-mol          #+#    #+#             */
/*   Updated: 2021/12/04 13:46:16 by pdal-mol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	move(t_stack **a, t_stack **b, void (*f)(t_stack **, t_stack **), int c)
{
	int	i;

	i = 0;
	while (i < c)
	{
		(*f)(a, b);
		i++;
	}
}
