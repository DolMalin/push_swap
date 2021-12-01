/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stackmax_elem.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdal-mol <dolmalinn@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 13:55:38 by pdal-mol          #+#    #+#             */
/*   Updated: 2021/12/01 16:31:04 by pdal-mol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

t_stack	*stackmax_elem(t_stack **a)
{
	t_stack *start;
	t_stack	*max;

	start = *a;
	max = start;
	while (start->next)
	{
		if (start->content > max->content)
			max = start;
		start = start->next;
	}
	if (start->content > max->content)
		max = start;
	return (max);
}