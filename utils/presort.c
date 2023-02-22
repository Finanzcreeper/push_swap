/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   presort.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nreher <nreher@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 09:34:21 by nreher            #+#    #+#             */
/*   Updated: 2023/02/22 23:02:17 by nreher           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	*presort(struct s_stacks stack)
{
	int	c;
	int	temp;
	int	*a;
	int	leng;

	leng = len(stack.ar[0], stack.st);
	a = fillarr(stack.ar[0], stack.st);
	if (a == NULL)
		return (NULL);
	temp = 1;
	while (temp == 1)
	{
		c = 0;
		temp = 0;
		while (c + 1 < leng)
		{
			if (a[c] > a[c + 1])
				a = schwap(a, &temp, c);
			c++;
		}
	}
	return (a);
}

int	*fillarr(int *in, int st)
{
	int	*out;
	int	c;

	out = ft_calloc(len(in, st), sizeof(int *));
	if (out == NULL)
		return (NULL);
	c = 0;
	while (in[c] != st)
	{
		out[c] = in[c];
		c++;
	}
	out[c] = st;
	return (out);
}
