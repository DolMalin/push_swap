/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_elem_pos.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdal-mol <dolmalinn@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 16:13:23 by pdal-mol          #+#    #+#             */
/*   Updated: 2021/12/01 14:09:58 by pdal-mol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

int	get_elem_pos(t_stack **stack, t_stack *elem)
{
	t_stack *start;
	int	i;

	i = 0;
	start = *stack;
	while (start->next)
	{
		if (start == elem)
			return (i);
		i++;
		start = start->next;
	}
	if (start == elem)
		return (i);
	return (-1);
}