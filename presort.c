/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   presort.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nreher <nreher@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 09:34:21 by nreher            #+#    #+#             */
/*   Updated: 2023/02/13 13:28:02 by nreher           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	presort(int **b, int argc)
{
	int	c;
	int	temp;
	int	*a;

	a = *b;
	argc -= 1;
	temp = 1;
	while (temp == 1)
	{
		c = 0;
		temp = 0;
		while (c + 1 < argc)
		{
			if (a[c] > a[c + 1])
			{
				temp = a[c];
				a[c] = a[c + 1];
				a[c + 1] = temp;
				temp = 1;
			}
			c++;
		}
	}
}
