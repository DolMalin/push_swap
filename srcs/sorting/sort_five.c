/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_five.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdal-mol <dolmalinn@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/02 17:17:01 by pdal-mol          #+#    #+#             */
/*   Updated: 2021/12/02 17:17:21 by pdal-mol         ###   ########.fr       */
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
