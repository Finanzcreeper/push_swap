/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nreher <nreher@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/03 11:19:14 by nreher            #+#    #+#             */
/*   Updated: 2023/02/22 23:02:21 by nreher           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	len(int *a, int st)
{
	int	c;

	c = 0;
	while (a[c] != st)
	{
		c++;
	}
	return (c);
}

void	normloop(struct s_stacks stack, int c)
{
	while (c >= 3 && stack.ar[0][c] != stack.st)
	{
		rra(stack, 0);
		c++;
	}
}

int	push_norm_loop(struct s_stacks old, int c, int pb, int **new)
{
	while (old.ar[pb][c - 1] != old.st)
	{
		new[pb][c] = old.ar[pb][c - 1];
		c++;
	}
	return (c);
}

void	annoyrm(struct s_stacks *stack, int argc, char *argv[], int *err)
{
	if (argc == 1)
	{
		stack -> ar = NULL;
		return ;
	}
	stack -> ar = ft_calloc(2, sizeof(int *));
	if (stack -> ar != NULL)
	{
		stack -> ar[0] = handler(argc, argv, err, &stack->st);
		stack -> ar[1] = ft_calloc(1, sizeof(int));
		if (stack -> ar[1] != NULL)
			stack -> ar[1][0] = stack -> st;
	}
}

void	doerr(struct s_stacks stack)
{
	write(2, "Error\n", 6);
	free_arr(stack);
}
