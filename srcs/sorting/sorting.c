/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdal-mol <dolmalinn@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 18:45:11 by pdal-mol          #+#    #+#             */
/*   Updated: 2021/12/02 19:07:35 by pdal-mol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	sorting(t_stack **a, t_stack **b)
{
	int	a_len;

	a_len = stacksize(*a);
	if (check_stack_sort(a))
		return ;
	if (a_len == 2)
		sort_two(a, b);
	else if (a_len == 3)
		sort_three(a, b);
	else if (a_len <= 5)
		sort_five(a, b);
	else if (a_len <= 100)
	{
		sort_chunk(a, b, stackmin(a), stackmin(a) + CHUNK_SIZE_SMALL, CHUNK_SIZE_SMALL);
		sort_max(a, b);
	}
	else if (a_len <= 500)
	{
		sort_chunk(a, b, stackmin(a), stackmin(a) + CHUNK_SIZE_BIG, CHUNK_SIZE_BIG);
		sort_max(a, b);
	}
}
