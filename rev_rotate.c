/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_rotate.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nreher <nreher@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 13:51:50 by nreher            #+#    #+#             */
/*   Updated: 2023/02/15 18:00:33 by nreher           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rra(int **arrs, int sentinel)
{
	int	temp;
	int	c;

	c = 0;
	while (arrs[0][c + 1] != sentinel)
	{
		c++;
	}
	temp = arrs[0][c];
	while (c > 0)
	{
		arrs[0][c] = arrs[0][c - 1];
		c--;
	}
	arrs[0][c] = temp;
	write(1, "rra\n", 4);
}

void	rrb(int **arrs, int sentinel)
{
	int	temp;
	int	c;

	c = 0;
	while (arrs[1][c + 1] != sentinel)
	{
		c++;
	}
	temp = arrs[1][c];
	while (c > 0)
	{
		arrs[1][c] = arrs[1][c - 1];
		c--;
	}
	arrs[1][c] = temp;
	write(1, "rrb\n", 4);
}

void	rrr(int **arrs, int sentinel)
{
	int	temp;
	int	c;

	c = 0;
	while (arrs[0][c + 1] != sentinel)
		c++;
	temp = arrs[0][c];
	while (c > 0)
	{
		arrs[0][c] = arrs[0][c - 1];
		c--;
	}
	arrs[0][c] = temp;
	c = 0;
	while (arrs[1][c + 1] != sentinel)
		c++;
	temp = arrs[1][c];
	while (c > 0)
	{
		arrs[1][c] = arrs[1][c - 1];
		c--;
	}
	arrs[1][c] = temp;
	write(1, "rrr\n", 4);
}
