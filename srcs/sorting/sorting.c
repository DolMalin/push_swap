/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdal-mol <dolmalinn@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 18:45:11 by pdal-mol          #+#    #+#             */
/*   Updated: 2021/12/02 17:12:29 by pdal-mol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	sort_five(t_stack **a, t_stack **b)
{
	
	if (stacksize(*a) == 5)
	{
		put_mina_to_top(a);
		pb(a, b);
		put_mina_to_top(a);
		pb(a, b);
		sort_three(a, b);
		pa(a, b);
		pa(a, b);
		return ;
	}
	put_mina_to_top(a);
	pb(a, b);
	sort_three(a, b);
	pa(a, b);
}

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
		sort_chunk(a, b, 0, 19);
		sort_max(a, b);
	}
	
}
