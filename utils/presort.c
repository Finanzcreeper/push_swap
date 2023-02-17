/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   presort.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nreher <nreher@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 09:34:21 by nreher            #+#    #+#             */
/*   Updated: 2023/02/17 18:16:31 by nreher           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	*presort(struct s_stacks stack)
{
	int	c;
	int	temp;
	int	*a;
	int	len;

	len = ft_intarrlen(stack.arrs[0], stack.sentinel);
	a = fillarr(stack.arrs[0], stack.sentinel);
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
