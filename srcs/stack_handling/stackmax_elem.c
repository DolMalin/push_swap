/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stackmax_elem.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdal-mol <dolmalinn@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 13:55:38 by pdal-mol          #+#    #+#             */
/*   Updated: 2021/12/01 13:56:33 by pdal-mol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

t_stack	*stackmax_elem(t_stack **a)
{
	t_stack *start;
	int	max;

	start = *a;
	max = start->content;
	while (start->next)
	{
		if (start->content > max)
			max = start->content;
		start = start->next;
	}
	if (start->content > max)
		max = start->content;
	return (start);
}