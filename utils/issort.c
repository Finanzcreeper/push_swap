/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   issort.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nreher <nreher@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 19:27:46 by nreher            #+#    #+#             */
/*   Updated: 2023/02/22 23:02:15 by nreher           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	issort(struct s_stacks stack)
{
	int	c;
	int	out;

	out = 0;
	c = 1;
	while (stack.ar[0][c] != stack.st)
	{
		if (stack.ar[0][c] < stack.ar[0][c - 1])
			out = 1;
		c++;
	}
	return (out);
}
