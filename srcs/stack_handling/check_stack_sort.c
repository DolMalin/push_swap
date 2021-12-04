/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_stack_sort.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdal-mol <dolmalinn@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 23:49:44 by pdal-mol          #+#    #+#             */
/*   Updated: 2021/12/04 14:04:19 by pdal-mol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

int	check_stack_sort(t_stack **a)
{
	t_stack	*start;

	start = *a;
	while (start->next)
	{
		if (start->content > start->next->content)
			return (0);
		start = start->next;
	}
	return (1);
}
