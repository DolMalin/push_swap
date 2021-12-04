/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_chunk.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdal-mol <dolmalinn@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 12:09:34 by pdal-mol          #+#    #+#             */
/*   Updated: 2021/12/04 14:02:06 by pdal-mol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	sort_chunk(t_stack **a, t_stack **b, int min, int chunk_size)
{
	if (stacksize(*a) < 1)
		return ;
	while (sort_chunk_move(a, b, min, min + chunk_size))
		;
	sort_chunk(a, b, min + chunk_size, chunk_size);
}
