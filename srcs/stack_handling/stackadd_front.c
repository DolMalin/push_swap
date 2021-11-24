/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stackadd_front.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdal-mol <dolmalinn@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 12:01:37 by pdal-mol          #+#    #+#             */
/*   Updated: 2021/11/24 13:18:59 by pdal-mol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	stackadd_front(t_stack **alst, t_stack *new)
{
	new->next = *alst;
	*alst = new;
}
