/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_three.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdal-mol <dolmalinn@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 18:54:47 by pdal-mol          #+#    #+#             */
/*   Updated: 2021/12/02 12:59:45 by pdal-mol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	sort_three(t_stack **a, t_stack **b)
{
	int	top;
	int	mid;
	int	bot;

	top = (*a)->content;
	mid = (*a)->next->content;
	bot = (*a)->next->next ->content;
	if (top > mid && mid < bot && top < bot)
		sa(a, b);
	else if (top > mid && mid > bot && top > bot)
	{
		sa(a, b);
		rra(a, b);
	}
	else if (top > mid && mid < bot && top > bot)
		ra(a, b);
	else if (top < mid && mid > bot && top < bot)
	{
		sa(a, b);
		ra(a, b);
	}
	else if (top < mid && mid > bot && top > bot)
		rra(a, b);
}
