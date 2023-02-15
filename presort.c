/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   presort.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nreher <nreher@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 09:34:21 by nreher            #+#    #+#             */
/*   Updated: 2023/02/15 17:51:27 by nreher           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	*presort(int **arrs, int sentinel)
{
	int	c;
	int	temp;
	int	*a;
	int	len;

	len = ft_intarrlen(arrs[0], sentinel);
	a = fillarr(arrs[0], sentinel);
	temp = 1;
	while (temp == 1)
	{
		c = 0;
		temp = 0;
		while (c + 1 < len)
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
	return (a);
}

int	*fillarr(int *in, int sentinel)
{
	int	*out;
	int	c;

	out = ft_calloc(ft_intarrlen(in, sentinel), sizeof(int *));
	c = 0;
	while (in[c] != sentinel)
	{
		out[c] = in[c];
		c++;
	}
	out[c] = sentinel;
	return (out);
}

void	mysort(int **arrs, int sentinel, int *presorted)
{
	int	c;
	int	i;

	c = 0;
	i = 0;
	while (presorted[i] != sentinel)
	{
		while (arrs[0][0] != presorted[i])
		{
			arrs = pb(arrs, sentinel);
		}
		ra(arrs, sentinel);
		i++;
		while (arrs[1][c] != sentinel)
		{
			if (arrs[1][c] == presorted[i])
			{
				arrs = sorter(arrs, sentinel, c);
				i++;
				c = -1;
			}
			c++;
		}
		c = 0;
	}
}

void	bubble(int **arrs, int sentinel)
{
	int	c;
	int	temp;
	int	len;

	len = ft_intarrlen(arrs[0], sentinel);
	temp = 0;
	while (temp < len)
	{
		c = 0;
		while (c < len)
		{
			if (arrs[0][0] > arrs[0][1])
			{
				sa(arrs, sentinel);
			}
			ra(arrs, sentinel);
			c++;
		}
		arrs = pb(arrs, sentinel);
		temp++;
	}
}
