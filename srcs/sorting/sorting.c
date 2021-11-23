/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdal-mol <dolmalinn@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 18:45:11 by pdal-mol          #+#    #+#             */
/*   Updated: 2021/11/23 13:11:38 by pdal-mol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"


int		is_in_chunk(int a, t_chunk chunk)
{
	if (a >= chunk.min && a <= chunk.max)
		return (1);
	return (0);
}

int	get_holdfirst_pos(t_stack **a, t_chunk chunk)
{
	int	count;

	count = 0;
	while ((*a)->next)
	{
		if (is_in_chunk((*a)->content, chunk))
			return (count);
		*a = (*a)->next;
		count++;
	}
	return (-1);
}

void	sorting(t_stack **a, t_stack **b)
{
	t_chunk chunk;

	chunk.min = 0;
	chunk.max = 19;

	printf("hf pos = %d\n", get_holdfirst_pos(a, chunk));
	(void)b;
}