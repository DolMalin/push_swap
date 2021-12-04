/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_in_chunk.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdal-mol <dolmalinn@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 16:55:52 by pdal-mol          #+#    #+#             */
/*   Updated: 2021/12/04 13:44:29 by pdal-mol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

int	is_in_chunk(int a, t_chunk chunk)
{
	if (a >= chunk.min && a <= chunk.max)
		return (1);
	return (0);
}
