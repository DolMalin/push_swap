/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ra.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdal-mol <dolmalinn@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 202/11/21 19:56:41 by pdal-mol          #+#    #+#             */
/*   Updated: 2021/11/21 20:39:43 by pdal-mol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	ra(t_list **a)
{
	t_list	*temp_first;
	t_list	*temp_second;
	t_list	*temp_before_last;
	t_list	*temp_last;

	if (ft_lstsize(*a) < 2)
		return ;
	temp_second = (*a)->next;
	temp_first = *a;
	temp_before_last = *a;
	temp_last = ft_lstlast(*a);
	while (temp_before_last->next->next)
		temp_before_last = temp_before_last->next;
	temp_before_last->next = temp_first;
	temp_first->next = NULL;
	temp_last->next = temp_second;
	*a = temp_last;
}
