/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nreher <nreher@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 11:17:24 by nreher            #+#    #+#             */
/*   Updated: 2023/02/17 18:16:18 by nreher           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"../push_swap.h"

void	ra(struct s_stacks stack, int silencer)
{
	int	temp;
	int	c;

	if (stack.arrs[0][1] == stack.sentinel)
		return ;
	temp = stack.arrs[0][0];
	c = 0;
	while (stack.arrs[0][c + 1] != stack.sentinel)
	{
		stack.arrs[0][c] = stack.arrs[0][c + 1];
		c++;
	}
	stack.arrs[0][c] = temp;
	if (silencer == 0)
		write(1, "ra\n", 3);
}

void	rb(struct s_stacks stack, int silencer)
{
	int	temp;
	int	c;

	if (stack.arrs[1][1] == stack.sentinel)
		return ;
	temp = stack.arrs[1][0];
	c = 0;
	while (stack.arrs[1][c + 1] != stack.sentinel)
	{
		stack.arrs[1][c] = stack.arrs[1][c + 1];
		c++;
	}
	stack.arrs[1][c] = temp;
	stack.arrs[1][c + 1] = stack.sentinel;
	if (silencer == 0)
		write(1, "rb\n", 3);
}

void	rr(struct s_stacks stack, int silencer)
{
	int	temp;
	int	c;

	temp = stack.arrs[1][0];
	c = 0;
	while (stack.arrs[1][c + 1] != stack.sentinel)
	{
		stack.arrs[1][c] = stack.arrs[1][c + 1];
		c++;
	}
	stack.arrs[1][c] = temp;
	stack.arrs[1][c + 1] = stack.sentinel;
	temp = stack.arrs[0][0];
	c = 0;
	while (stack.arrs[0][c + 1] != stack.sentinel)
	{
		stack.arrs[0][c] = stack.arrs[0][c + 1];
		c++;
	}
	stack.arrs[0][c] = temp;
	stack.arrs[0][c + 1] = stack.sentinel;
	if (silencer == 0)
		write(1, "rr\n", 3);
}
