/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sb.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdal-mol <dolmalinn@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/21 18:05:10 by pdal-mol          #+#    #+#             */
/*   Updated: 2021/11/21 18:05:45 by pdal-mol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	sb(t_list **b)
{
	t_list	*temp;

	if (ft_lstsize(*b) < 3)
		return ;
	temp = *b;	
	*b = (*b)->next;
	temp->next = (*b)->next;
	(*b)->next = temp;
}