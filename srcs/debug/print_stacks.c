/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_stacks.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdal-mol <dolmalinn@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/21 13:44:15 by pdal-mol          #+#    #+#             */
/*   Updated: 2021/11/21 13:48:08 by pdal-mol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	print_stacks(t_stack *stack)
{
	size_t	i;

	i = 0;
	while (stack->a[i])
	{
		printf("%d\n", stack->a[i]);
		i++;
	}
}