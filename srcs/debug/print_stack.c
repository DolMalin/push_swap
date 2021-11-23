/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_stack.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdal-mol <dolmalinn@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/21 15:41:41 by pdal-mol          #+#    #+#             */
/*   Updated: 2021/11/23 11:44:54 by pdal-mol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	print_stack(t_stack *a, t_stack *b)
{
	while (a || b)
	{
		if (a->content && b->content)
		{
			printf("%d				| %d", a->content, b->content);
			if (a->next && b->next)
			{
				a = a->next;
				b = b->next;
			}
			else if (b->next)
				b = b->next;
			else if (a->next)
				a = a->next;
			else
				break ;
		}
		else if (a->content)
		{
			printf("%d				| ", a->content);
			if (a->next)
				a = a->next;
			else
				break ;
		}
		else if (b->content)
		{
			printf("				| %d", b->content);
			if (b->next)
				b = b->next;
			else
				break ;
		}
		printf("\n");
	}
}
