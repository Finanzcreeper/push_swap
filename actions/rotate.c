/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nreher <nreher@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 11:17:24 by nreher            #+#    #+#             */
/*   Updated: 2023/02/22 23:02:07 by nreher           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"../push_swap.h"

void	ra(struct s_stacks stack, int silencer)
{
	int	temp;
	int	c;

	if (stack.ar[0][1] == stack.st)
		return ;
	temp = stack.ar[0][0];
	c = 0;
	while (stack.ar[0][c + 1] != stack.st)
	{
		stack.ar[0][c] = stack.ar[0][c + 1];
		c++;
	}
	stack.ar[0][c] = temp;
	if (silencer == 0)
		write(1, "ra\n", 3);
}

void	rb(struct s_stacks stack, int silencer)
{
	int	temp;
	int	c;

	if (stack.ar[1][1] == stack.st)
		return ;
	temp = stack.ar[1][0];
	c = 0;
	while (stack.ar[1][c + 1] != stack.st)
	{
		stack.ar[1][c] = stack.ar[1][c + 1];
		c++;
	}
	stack.ar[1][c] = temp;
	stack.ar[1][c + 1] = stack.st;
	if (silencer == 0)
		write(1, "rb\n", 3);
}

void	rr(struct s_stacks stack, int silencer)
{
	int	temp;
	int	c;

	temp = stack.ar[1][0];
	c = 0;
	while (stack.ar[1][c + 1] != stack.st)
	{
		stack.ar[1][c] = stack.ar[1][c + 1];
		c++;
	}
	stack.ar[1][c] = temp;
	stack.ar[1][c + 1] = stack.st;
	temp = stack.ar[0][0];
	c = 0;
	while (stack.ar[0][c + 1] != stack.st)
	{
		stack.ar[0][c] = stack.ar[0][c + 1];
		c++;
	}
	stack.ar[0][c] = temp;
	stack.ar[0][c + 1] = stack.st;
	if (silencer == 0)
		write(1, "rr\n", 3);
}
