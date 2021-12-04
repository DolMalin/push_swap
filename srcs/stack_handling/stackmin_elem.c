/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stackmin_elem.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdal-mol <dolmalinn@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/02 16:40:28 by pdal-mol          #+#    #+#             */
/*   Updated: 2021/12/04 14:14:07 by pdal-mol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

t_stack	*stackmin_elem(t_stack **a)
{
	t_stack	*start;
	t_stack	*min;

	start = *a;
	min = start;
	while (start->next)
	{
		if (start->content < min->content)
			min = start;
		start = start->next;
	}
	if (start->content < min->content)
		min = start;
	return (min);
}
