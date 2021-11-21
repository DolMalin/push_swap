/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdal-mol <dolmalinn@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/20 16:05:05 by pdal-mol          #+#    #+#             */
/*   Updated: 2021/11/21 11:56:07 by pdal-mol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

/* =============== INCLUDES =============== */
# include "../libft/libft.h"

#include <limits.h>
#include <stdlib.h>
// TO REMOVE
#include <stdio.h>

/* =============== PROTOTYPES =============== */

/* =============== INPUT PARSING =============== */
int		check_input_is_all_int(int ac, char **av);
void	check_input_validity(int ac, char **av);
void	exit_program_with_error(void);
#endif