/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nreher <nreher@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/03 11:19:14 by nreher            #+#    #+#             */
/*   Updated: 2023/02/21 12:59:17 by nreher           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

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

void	normloop(struct s_stacks stack, int c)
{
	while (c >= 3 && stack.arrs[0][c] != stack.sentinel)
	{
		rra(stack, 0);
		c++;
	}
}

int	push_norm_loop(struct s_stacks old, int c, int pb, int **new)
{
	while (old.arrs[pb][c - 1] != old.sentinel)
	{
		new[pb][c] = old.arrs[pb][c - 1];
		c++;
	}
	return (c);
}

void	annoyrm(struct s_stacks *stack, int argc, char *argv[], int *err)
{
	stack -> arrs = ft_calloc(2, sizeof(int *));
	if (stack -> arrs != NULL)
	{
		stack -> arrs[0] = handler(argc, argv, err, &stack->sentinel);
		stack -> arrs[1] = ft_calloc(1, sizeof(int));
		if (stack -> arrs[1] != NULL)
			stack -> arrs[1][0] = stack -> sentinel;
	}
}

void	doerr(struct s_stacks stack)
{
	write(2, "Error\n", 6);
	free_arr(stack);
}
