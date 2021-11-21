/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pb.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdal-mol <dolmalinn@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/21 18:10:52 by pdal-mol          #+#    #+#             */
/*   Updated: 2021/11/21 18:31:16 by pdal-mol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	pb(t_list **a, t_list **b)
{
	t_list	*temp;

	if (ft_lstsize(*a) < 1)
		return ;
	if (!b)
		printf("LOL");
	temp = (*a)->next;
	ft_lstadd_front(b, *a);
	*a = temp;
}
