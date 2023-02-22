/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_under_6.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nreher <nreher@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 17:38:13 by nreher            #+#    #+#             */
/*   Updated: 2023/02/22 23:02:12 by nreher           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	u6(struct s_stacks stack, int *presorted)
{
	int	leng;

	leng = len(stack.ar[0], stack.st);
	if (leng == 2)
	{
		ra(stack, 0);
		free_arr(stack);
	}
	if (leng == 3)
	{
		stack.ar = threelen(stack.ar, stack);
		free_arr(stack);
	}
	if (leng == 4)
		fourlen(stack, presorted);
	if (leng == 5)
		fivelen(stack, presorted);
}

int	**threelen(int **a, struct s_stacks stack)
{
	if (a[0][0] < a[0][1] && a[0][1] > a[0][2] && a[0][2] > a[0][0])
	{
		sa(stack, 0);
		ra(stack, 0);
	}
	if (a[0][0] > a[0][1] && a[0][1] < a[0][2] && a[0][2] > a[0][0])
	{
		sa(stack, 0);
	}
	if (a[0][0] < a[0][1] && a[0][1] > a[0][2] && a[0][2] < a[0][0])
	{
		rra(stack, 0);
	}
	if (a[0][0] > a[0][1] && a[0][1] > a[0][2] && a[0][2] < a[0][0])
	{
		sa(stack, 0);
		rra(stack, 0);
	}
	if (a[0][0] > a[0][1] && a[0][1] < a[0][2] && a[0][2] < a[0][0])
	{
		ra(stack, 0);
	}
	return (a);
}

void	fourlen(struct s_stacks stack, int *presorted)
{
	int	c;

	c = 0;
	presorted[0] = 1;
	while (len(stack.ar[0], stack.st) > 3)
		stack.ar = pb(stack, 0);
	stack.ar = threelen(stack.ar, stack);
	c = 0;
	while (stack.ar[1][0] != presorted[c])
		c++;
	while (c > 0)
	{
		ra(stack, 0);
		c--;
	}
	stack.ar = pa(stack, 0);
	while (stack.ar[0][c] != presorted[0])
		c++;
	c++;
	while (c--, c < 3 && c > 0)
		ra(stack, 0);
	normloop(stack, c);
	free_arr(stack);
}

void	fivelen(struct s_stacks stack, int *presorted)
{
	int	i;

	i = 0;
	while (presorted[0] != stack.ar[0][i])
		i++;
	if (i == 4)
		rra(stack, 0);
	else
	{
		while (stack.ar[0][0] != presorted[0])
			ra(stack, 0);
	}
	stack.ar = pb(stack, 0);
	while (stack.ar[0][0] != presorted[1])
		ra(stack, 0);
	stack.ar = pb(stack, 0);
	stack.ar = threelen(stack.ar, stack);
	stack.ar = pa(stack, 0);
	stack.ar = pa(stack, 0);
	free_arr(stack);
}
