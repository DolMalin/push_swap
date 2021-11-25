/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stackmax.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdal-mol <dolmalinn@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 12:28:25 by pdal-mol          #+#    #+#             */
/*   Updated: 2021/11/25 12:41:54 by pdal-mol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "../../includes/push_swap.h"

int	stackmax(t_stack **a)
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
	return (max);
}
