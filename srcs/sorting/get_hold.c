/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_hold.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdal-mol <dolmalinn@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 16:57:04 by pdal-mol          #+#    #+#             */
/*   Updated: 2021/12/09 11:49:35 by pdal-mol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

t_hold	get_hold(t_stack **a, t_chunk chunk)
{
	t_hold	hold;
	t_stack	*start;
	int		i;

	i = 0;
	hold.first_pos = -1;
	hold.second_pos = -1;
	start = *a;
	while (start)
	{
		if (is_in_chunk(start->content, chunk) && hold.first_pos == -1)
			hold.first_pos = i;
		else if (is_in_chunk(start->content, chunk) && hold.second_pos == -1)
			hold.second_pos = i;
		start = start->next;
		i++;
	}
	return (hold);
}
