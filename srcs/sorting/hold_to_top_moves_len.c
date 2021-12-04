/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hold_to_top_moves_len.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdal-mol <dolmalinn@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 10:35:53 by pdal-mol          #+#    #+#             */
/*   Updated: 2021/12/04 13:44:17 by pdal-mol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

int	hold_to_top_moves_len(int hold_pos, int stack_size)
{
	if (hold_pos < stack_size / 2)
		return (hold_pos);
	return (stack_size - hold_pos);
}
