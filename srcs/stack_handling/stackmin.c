/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stackmin.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdal-mol <dolmalinn@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 10:54:29 by pdal-mol          #+#    #+#             */
/*   Updated: 2021/11/25 10:54:55 by pdal-mol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

int	stackmin(t_stack **a)
{
	t_stack *start;
	int	min;

	start = *a;
	min = start->content;
	while (start->next)
	{
		if (start->content < min)
			min = start->content;
		start = start->next;
	}
	if (start->content < min)
		min = start->content;
	return (min);
}
