/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_chunk.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdal-mol <dolmalinn@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 12:09:34 by pdal-mol          #+#    #+#             */
/*   Updated: 2021/11/25 12:14:29 by pdal-mol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	sort_chunk(t_stack **a, t_stack **b, int min, int max)
{
	if (stacksize(*a) < 1)
		return ;
	while(sort_chunk_move(a, b, min, max))
		;
	sort_chunk(a, b, min + 20, max + 20);
}
