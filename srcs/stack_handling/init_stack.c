/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_stack.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdal-mol <dolmalinn@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/21 13:21:41 by pdal-mol          #+#    #+#             */
/*   Updated: 2021/11/21 13:52:12 by pdal-mol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	init_stack(t_stack *stack, char **av, size_t len)
{
	stack->a = malloc(sizeof(int) * len);
	stack->b = malloc(sizeof(int) * len);
	(void)av;
	if (!stack->a || !stack->b)
		exit_program_with_error();
	//fill_stack(stack->a, av, len);
}
