/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rb.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdal-mol <dolmalinn@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 10:43:01 by pdal-mol          #+#    #+#             */
/*   Updated: 2021/11/22 10:43:37 by pdal-mol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "../../includes/push_swap.h"

void	rb(t_list **b)
{
	t_list	*temp_first;
	t_list	*temp_second;
	t_list	*temp_last;

	if (ft_lstsize(*b) < 2)
		return ;
	temp_second = (*b)->next;
	temp_first = *b;
	temp_last = ft_lstlast(*b);
	temp_last->next = temp_first;
	temp_first->next = NULL;
	*b = temp_second;
}
