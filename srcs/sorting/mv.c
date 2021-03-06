/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mv.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdal-mol <dolmalinn@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 15:59:33 by pdal-mol          #+#    #+#             */
/*   Updated: 2021/12/07 15:59:34 by pdal-mol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	mv(t_stack **a, t_stack **b, void (*f)(t_stack **, t_stack **), int c)
{
	int	i;

	i = 0;
	while (i < c)
	{
		(*f)(a, b);
		i++;
	}
}
