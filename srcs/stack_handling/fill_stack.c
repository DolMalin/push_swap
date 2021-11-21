/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fill_stack.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdal-mol <dolmalinn@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/21 13:33:14 by pdal-mol          #+#    #+#             */
/*   Updated: 2021/11/21 13:50:46 by pdal-mol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	fill_stack(int *stack, char **av, size_t len)
{
	size_t	i;

	i = 0;
	while (len > 1)
	{
		stack[0] = ft_atoi(av[len]);	
		len--;
	}
}
