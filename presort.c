/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   presort.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nreher <nreher@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 09:34:21 by nreher            #+#    #+#             */
/*   Updated: 2023/02/09 14:25:11 by nreher           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>

void	presort(int **b, int argc)
{
	int	c;
	int	temp;
	int	flag;
	int	*a;

	a = *b;
	argc -= 1;
	flag = 1;
	while(flag == 1)
	{
		c = 0;
		flag = 0;
		while (c + 1 < argc)
		{
			if (a[c] > a[c + 1])
			{
				temp = a[c];
				a[c] = a[c + 1];
				a[c + 1] = temp;
				flag = 1;
			}
			c++;
		}
	}
	c = 0;
	while (c < argc)
	{
		printf("%d\n", a[c]);
		c++;
	}
}