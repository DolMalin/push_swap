/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_elem_pos.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdal-mol <dolmalinn@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 16:13:23 by pdal-mol          #+#    #+#             */
/*   Updated: 2021/11/23 16:16:15 by pdal-mol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

int	get_elem_pos(t_stack **stack, t_stack *elem)
{
	int	i;

	i = 0;
	while ((*stack)->next)
	{
		if (*stack == elem)
			return (i);
		i++;
		*stack = (*stack)->next;
	}
	if (*stack == elem)
		return (i);
	return (-1);
}