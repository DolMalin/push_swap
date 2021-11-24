/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_stack.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdal-mol <dolmalinn@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/21 15:41:41 by pdal-mol          #+#    #+#             */
/*   Updated: 2021/11/24 18:06:31 by pdal-mol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	print_stack(t_stack *a, t_stack *b)
{
	int a_len;
	int b_len;
	int	i;

	a_len = stacksize(a);
	b_len = stacksize(b);
	i = 0;
	printf("A | ");
	while (i < a_len - 1)
	{
		printf("%d ",a->content);
		a = a->next;
		i++;
	}
	if (a_len > 0)
		printf("%d\n", a->content);
	printf("B | ");
	i = 0;
	while (i < b_len - 1)
	{
		printf("%d ", b->content);
		b = b->next;
		i++;
	}
	if (b_len > 0)
		printf("%d\n", b->content);
	
	
}
