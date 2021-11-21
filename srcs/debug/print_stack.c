/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_stack.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdal-mol <dolmalinn@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/21 15:41:41 by pdal-mol          #+#    #+#             */
/*   Updated: 2021/11/21 15:48:20 by pdal-mol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	print_stack(t_list *a, t_list *b)
{
	(void)b;

	while(a)
	{
		printf("%d\n", (int)a->content);
		a = a->next;
	}
}
