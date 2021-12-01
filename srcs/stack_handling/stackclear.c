/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stackclear.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdal-mol <dolmalinn@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 11:17:59 by pdal-mol          #+#    #+#             */
/*   Updated: 2021/12/01 11:41:39 by pdal-mol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	stackclear(t_stack **stack, void (*del)(void *))
{
	t_stack	*buff;

	while ((*stack))
	{
		buff = *stack;
		*stack = (*stack)->next;
		del(buff);
	}
	stack = NULL;
}
