/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pa.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdal-mol <dolmalinn@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/21 18:31:29 by pdal-mol          #+#    #+#             */
/*   Updated: 2021/11/21 18:31:58 by pdal-mol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	pa(t_list **a, t_list **b)
{
	t_list	*temp;

	if (ft_lstsize(*b) < 1)
		return ;
	temp = (*b)->next;
	ft_lstadd_front(a, *b);
	*b = temp;
}
