/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nreher <nreher@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/03 11:19:14 by nreher            #+#    #+#             */
/*   Updated: 2023/02/15 17:51:32 by nreher           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_intarrlen(int *a, int sentinel)
{
	int	c;

	c = 0;
	while (a[c] != sentinel)
	{
		c++;
	}
	return (c);
}

int	**sorter(int **arrs, int sentinel, int c)
{
	int	temp;

	temp = c;
	if (c < ft_intarrlen(arrs[1], sentinel) / 2)
	{
		while (temp > 0)
		{
			rb(arrs, sentinel);
			temp--;
		}
	}
	else
	{
		while (temp < ft_intarrlen(arrs[1], sentinel))
		{
			rrb(arrs, sentinel);
			temp++;
		}
	}
	arrs = pa(arrs, sentinel);
	ra(arrs, sentinel);
	return (arrs);
}
