/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sa.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdal-mol <dolmalinn@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/21 17:48:04 by pdal-mol          #+#    #+#             */
/*   Updated: 2021/11/22 11:34:07 by pdal-mol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	sa(t_list **a)
{
	t_list	*temp;

	if (ft_lstsize(*a) < 3)
		return ;
	temp = *a;
	*a = (*a)->next;
	temp->next = (*a)->next;
	(*a)->next = temp;
}
