/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_coder.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nreher <nreher@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/03 12:01:47 by nreher            #+#    #+#             */
/*   Updated: 2023/02/03 15:44:00 by nreher           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push_swap_coder(int o)
{
	if (o == 0)
		return ;
	else if (o == 1)
		write(1, "sa\n", 3);
	else if (o == 2)
		write(1, "sb\n", 3);
	else if (o == 3)
		write(1, "ss\n", 3);
	else if (o == 4)
		write(1, "pa\n", 3);
	else if (o == 5)
		write(1, "pb\n", 3);
	else if (o == 6)
		write(1, "ra\n", 3);
	else if (o == 7)
		write(1, "rb\n", 3);
	else if (o == 8)
		write(1, "rr\n", 3);
	else if (o == 9)
		write(1, "rra\n", 4);
	else if (o == 10)
		write(1, "rrb\n", 4);
	else if (o == 11)
		write(1, "rrr\n", 4);
	return ;
}
