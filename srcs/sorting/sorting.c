/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdal-mol <dolmalinn@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 18:45:11 by pdal-mol          #+#    #+#             */
/*   Updated: 2021/11/23 17:00:26 by pdal-mol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"


/* 
	- posix of the two firsts hold works
	=> compute which moove will be the shortest 
*/

void	sorting(t_stack **a, t_stack **b)
{
	t_chunk chunk;
	t_hold	hold;

	chunk.min = 0;
	chunk.max = 20;
	hold = get_hold(a, chunk);
	(void)b;
	printf("first %d  | second %d", hold.first_pos, hold.second_pos);
}