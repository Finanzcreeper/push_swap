/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_under_6.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nreher <nreher@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 17:38:13 by nreher            #+#    #+#             */
/*   Updated: 2023/02/17 18:15:57 by nreher           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	u6(struct s_stacks stack, int *presorted)
{
	int	len;

	len = ft_intarrlen(stack.arrs[0], stack.sentinel);
	if (len == 2)
		ra(stack, 0);
	if (len == 3)
	{
		stack.arrs = threelen(stack.arrs, stack);
		free_arr(stack);
	}
	if (len == 4)
		fourlen(stack, presorted);
	if (len == 5)
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
	while (ft_intarrlen(stack.arrs[0], stack.sentinel) > 3)
		stack.arrs = pb(stack, 0);
	stack.arrs = threelen(stack.arrs, stack);
	c = 0;
	while (stack.arrs[1][0] != presorted[c])
		c++;
	while (c > 0)
	{
		ra(stack, 0);
		c--;
	}
	stack.arrs = pa(stack, 0);
	while (stack.arrs[0][c] != presorted[0])
		c++;
	while (c < 3 && c > 0)
	{
		ra(stack, 0);
		c--;
	}
	normloop(stack, c);
	free_arr(stack);
}

void	fivelen(struct s_stacks stack, int *presorted)
{
	int	i;

	i = 0;
	while (presorted[0] != stack.arrs[0][i])
		i++;
	if (i == 4)
		rra(stack, 0);
	else
	{
		while (stack.arrs[0][0] != presorted[0])
			ra(stack, 0);
	}
	stack.arrs = pb(stack, 0);
	while (stack.arrs[0][0] != presorted[1])
		ra(stack, 0);
	stack.arrs = pb(stack, 0);
	stack.arrs = threelen(stack.arrs, stack);
	stack.arrs = pa(stack, 0);
	stack.arrs = pa(stack, 0);
	free_arr(stack);
}
